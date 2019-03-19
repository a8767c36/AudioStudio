#include "api.hpp"

/**
 * formula:
 * https://en.wikipedia.org/wiki/Low-pass_filter#Simple_infinite_impulse_response_filter
 * https://en.wikipedia.org/wiki/Low-pass_filter#RC_filter
 **/

void lowPass_real (float *buffer, int length, float cut_freq) {
	float tau = 1 / (cut_freq * 2 * 3.141592653589793);
	float dt  = 1.0 / ctx.sampleRate;
	float alpha = dt / (tau + dt);

	buffer[0] = buffer[0];
	for (int i = 1; i < length; i++) {
		buffer[i] = alpha * buffer[i] + (1-alpha) * buffer[i-1];
	}
}

__attribute__((used)) extern "C"
void lowPass (cpx_t *buffer, int length, float cut_freq) {
	float tau = 1 / (cut_freq * 2 * 3.141592653589793);
	float dt  = 1.0 / ctx.sampleRate;
	float alpha = dt / (tau + dt);

	buffer[0].real = buffer[0].real;
	buffer[0].imag = buffer[0].imag;
	for (int i = 1; i < length; i++) {
		buffer[i].real = alpha * buffer[i].real + (1-alpha) * buffer[i-1].real;
		buffer[i].imag = alpha * buffer[i].imag + (1-alpha) * buffer[i-1].imag;
	}
}

// time-reversed (operates from right to left)
__attribute__((used)) extern "C"
void lowPass_(cpx_t *buffer, int length, float cut_freq) {
	float tau = 1 / (cut_freq * 2 * 3.141592653589793);
	float dt  = 1.0 / ctx.sampleRate;
	float alpha = dt / (tau + dt);

	buffer[length-1].real = buffer[length-1].real;
	buffer[length-1].imag = buffer[length-1].imag;
	for (int i = length-2; i >= 0; i--) {
		buffer[i].real = alpha * buffer[i].real + (1-alpha) * buffer[i+1].real;
		buffer[i].imag = alpha * buffer[i].imag + (1-alpha) * buffer[i+1].imag;
	}
}
