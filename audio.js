import {timeout, event, resumed, animationFrame} from './utils.js';  // utility functions

export
let ctx = new AudioContext();
window.addEventListener('click', () => ctx.resume(), {once: true});

export
async function loadPCM (url) {
	let audio = await fetch(url).then(res => res.arrayBuffer()).then(buf => ctx.decodeAudioData(buf));
	let PCM   = new Float32Array(audio.length);
	for (let n = 0; n < audio.numberOfChannels; n++) {
		let channel = audio.getChannelData(n);
		for (let i = 0; i < PCM.length; i++) {
			PCM[i] += channel[i];
		}
	}
	for (let i = 0; i < PCM.length; i++) {
		PCM[i] /= audio.numberOfChannels;
	}
	return PCM;
}

export
async function playPCM (pcm) {
	let audio = ctx.createBuffer(1, pcm.length, ctx.sampleRate);
	audio.copyToChannel(pcm, 0);
	let node  = ctx.createBufferSource();
	node.buffer = audio;
	node.connect(ctx.destination);
	node.start();

	return new Promise(fulfill => setTimeout(fulfill, pcm.length / ctx.sampleRate * 1000));
}

export
function playFrequencies (freqs, duration) {
					// this needs to be done via WebAudioAPI...
					// -----> todo <-----
	for (let f in freqs) {
		console.log(`${f}: ${freqs[f]}`);
		let oscillator = ctx.createOscillator();
		oscillator.frequency.value = f;
		oscillator.connect(ctx.destination);
		oscillator.start();
		timeout(duration).then(() => oscillator.stop());
	}
}
