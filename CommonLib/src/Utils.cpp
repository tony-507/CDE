#include "../include/Utils.hpp"
#include <math.h>
#include <iostream>

BitReader::BitReader(unsigned char *buf):
remained_bits(8),
buffer(buf){}

int BitReader::getWord(int size) {
	int mask = 0;
	int res = *buffer;
	// TODO size>=8
	if (size < 8) {
		if (remained_bits >= size) {
			mask = pow(2, remained_bits) - 1;
			res = (int)((res & mask) >> (remained_bits - size));
			if (remained_bits > size)
				remained_bits -= size;
			else {
				remained_bits = 8;
				buffer++;
			}
		} else {
			mask = pow(2, remained_bits) - 1;
			res = ((int)(*buffer++) & mask);
			std::cout << "First part: " << res << std::endl;
			res = (res << (size - remained_bits)) + ((*buffer) >> (8 - size + remained_bits));
			std::cout << "result: " << res << std::endl;
			remained_bits = 8 - size + remained_bits;
		}
	} else {
		throw "Not Supported now";
	}
	return res;
}

void myMath::linMap (unsigned char *buf, float contrast, int bias) {
	for (unsigned char *it = buf; *it != 0; it++) {
		*it = (unsigned char)(contrast*(*it) + bias);
	}
}
