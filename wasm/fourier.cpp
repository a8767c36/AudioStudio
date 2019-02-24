#include "api.hpp"
#define sampleRate ctx.sampleRate



__attribute((used)) extern "C"
void fourier (real_t *in, real_t *out, size_t length, real_t freq, real_t bandwidth) {
	if (tmp_buffer_length < sizeof(cpx_t) * length)  _throw("tmp_buffer too small!");
	cpx_t *tmp = (cpx_t*)tmp_buffer;

	for (int i = 0; i < length; i++) {
		// out[i] = in[i] * exp(j*omega*t);
		tmp[i].real = in[i] * sin(2*PI*freq * i/sampleRate);
		tmp[i].imag = in[i] * cos(2*PI*freq * i/sampleRate);
	}

	lowPass(tmp, length, bandwidth);

	for (int i = 0; i < length; i++) {
		out[i] = cpx_abs(tmp[i]);
	}
}


