typedef float real_t;
typedef struct {
	real_t real;
	real_t imag;
} cpx_t;

static inline
real_t cpx_abs (const cpx_t c) {
	return sqrt(c.real*c.real + c.imag*c.imag);
}

/*
 * Note: `out' and `a' must not refer to the same address!
 */
static inline
void cpx_mul_to (cpx_t& out, const cpx_t& a, const cpx_t& b) {
	/*
	 * out.real  = 0;
	 * out.imag  = 0;
	 * out.real += a.real * b.real;
	 * out.imag += a.real * b.imag;
	 * out.imag += a.imag * b.real;
	 * out.real -= a.imag * b.imag;
	 */
	 out.real = a.real*b.real - a.imag*b.imag;
	 out.imag = a.real*b.imag + a.imag*b.real;
}

static inline
void cpx_mul_by (cpx_t& out, const cpx_t& by) {
	cpx_t tmp = out;
	cpx_mul_to(out, tmp, by);
}

#include "complex_precomputed.h"
// cpx_exp(x) = e^(i*x)
static inline
cpx_t const& cpx_exp (const real_t exponent_imag) {
	/*
	 * return {
	 * 	.real = cos(exponent_imag),
	 * 	.imag = sin(exponent_imag),
	 * };
	 * Theoretically, but we can do better than that!
	 * (with a precomputed table)
	 * Note that the precision is low though...
	 */
	int i = int(exponent_imag * 81.48733086305042) & 0xff;
	return cpx_exp_precomputed_table[i];
}
