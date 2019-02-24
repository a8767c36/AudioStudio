typedef unsigned long ptr_t;
typedef float real_t;
typedef struct {
	real_t real;
	real_t imag;
} cpx_t;

#include "complex.h"



/* HELPER TYPES */
#define sin(x) sinf(x)
#define cos(x) cosf(x)
#define PI ((float)3.141592653589793)
#define NULL 0
typedef int size_t;
extern "C" {
	float sin  (float x);
	float cos  (float x);
	float sqrt (float x);

	void print_num (float x);
	void _throw (const char *msg);
}
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

	void lowPass (float *buffer, int length, float cut_freq);

	void fourier (real_t *in, real_t *out, size_t length, real_t freq, real_t bandwidth);
}
void lowPass (cpx_t *buffer, int length, float cut_freq);

