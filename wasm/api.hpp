/* HELPER TYPES */
#define sin(x) sinf(x)
#define cos(x) cosf(x)
#define PI ((float)3.141592653589793)
#define NULL 0
typedef long size_t;
extern "C" {
	float sin  (float x);
	float cos  (float x);
	float sqrt (float x);

	void print_num (float x);
	void _throw (const char *msg);
}
#include "complex.h"
extern "C" void *tmp_buffer;
extern "C" size_t tmp_buffer_length;



class AudioContext {
 public:
	float sampleRate;
};
extern AudioContext ctx;

/* FUNCTIONS ACTUALLY DOING USEFUL WORK */

extern "C" {
	void init (void *tmp_buf, size_t tmp_buf_len, float sampleRate);

	void lowPass (cpx_t *buffer, int length, float cut_freq);
	void lowPass_(cpx_t *buffer, int length, float cut_freq);  // time-reversed
	void fourier (cpx_t *out, const cpx_t *in, int length, float freq, float bandwidth);
}
void lowPass_real (float *buffer, int length, float cut_freq);


