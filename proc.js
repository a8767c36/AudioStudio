let importObj = {
	sinf: Math.sin,
	cosf: Math.cos,
	sqrt: Math.sqrt,
	print_num: console.log,
	_throw (err) { throw new Error(err) },
};

export
async function getProg (...init_args) {
	let wasm = (await fetch('wasm/build.wasm').then(res => res.arrayBuffer()).then(buf => WebAssembly.instantiate(buf, {env: importObj}))).instance.exports;
	wasm.memory.grow(2**24 / 2**16);  // 16 MiB
	let memory = new Float32Array(wasm.memory.buffer);
	let heap_base = wasm.__heap_base;
	wasm.init(heap_base, 4*1024*1024, ...init_args);
	heap_base += 4*1024*1024;  // tmp_buffer, used internally in wasm



	return {
		wasm,
		memory,
		alloc_f32 (len) {
			let view = memory.subarray(heap_base/4, heap_base/4 + len);
			heap_base += len*4;
			return view;
		},
		lowPass (inout_buf, cut_freq) {
			if (inout_buf.buffer != memory.buffer) throw new Error(       'buffer is not valid!');
			wasm.lowPass(inout_buf.byteOffset, inout_buf.length, cut_freq);
		},
		fourier (in_buf, out_buf, freq, bandwidth) {
			if (  out_buf.buffer != memory.buffer) throw new Error('output buffer is not valid!');
			if (   in_buf.buffer != memory.buffer) throw new Error( 'input buffer is not valid!');
			wasm.fourier(in_buf.byteOffset, out_buf.byteOffset, in_buf.length, freq, bandwidth);
		},
		fourierExtract (in_buf, out_buf, freq, bandwidth) {
			if (  out_buf.buffer != memory.buffer) throw new Error('output buffer is not valid!');
			if (   in_buf.buffer != memory.buffer) throw new Error( 'input buffer is not valid!');
			wasm.fourierExtract(in_buf.byteOffset, out_buf.byteOffset, in_buf.length, freq, bandwidth);
		},
	};
}

