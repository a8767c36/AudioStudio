export
let canvas = document.createElement('canvas');
let ctx    = canvas.getContext('2d');

export
function plotFourier (spectrum) {
	ctx.clearRect(0, 0, canvas.width, canvas.height);

	let freq_max = 20 * 1.01**spectrum.length;
	for (let i = 0; i < spectrum.length; i++) {
		let freq = 20 * 1.01**i;
		//let x = freq / freq_max * canvas.width;
		let x = i / spectrum.length * canvas.width;
		ctx.fillColor = 'white'; // getColor(spectrum[i]);
		ctx.fillRect(x, 0, canvas.width / spectrum.length + 1 /*freq*0.01 / freq_max * canvas.width*/, canvas.height * spectrum[i]);  // note that the bars are drawn larger than their actual bandwidth
	}
}
