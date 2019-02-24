#include "api.hpp"

void *tmp_buffer;
size_t tmp_buffer_length;
AudioContext ctx = {
	.sampleRate = 0.0,
};

__attribute__((used)) extern "C"
void init (void *tmp_buf, size_t tmp_buf_len, float sampleRate) {
	tmp_buffer = tmp_buf;
	tmp_buffer_length = tmp_buf_len;
	ctx.sampleRate = sampleRate;
}
