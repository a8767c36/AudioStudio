#include "api.hpp"
#define sampleRate ctx.sampleRate


/*
 * For the formulas, please refer to `/latex/index.pdf'.
 * It should be noted though that the below implementation
 * doesn't adhere strictly to the somewhat abstract definition given there.
 */
__attribute__((used)) extern "C"
void fourier (cpx_t *out, const cpx_t *in, int length, float freq, float bandwidth) {
	float omega = 2 * PI * freq / sampleRate;
	for (int i = 0; i < length; i++) {
		cpx_mul_to(out[i], in[i], cpx_exp(omega * float(-i)));
	}
	lowPass (out, length, bandwidth);
	lowPass_(out, length, bandwidth);
}

