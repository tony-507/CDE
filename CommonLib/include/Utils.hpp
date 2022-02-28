class BitReader {
public:
	BitReader(unsigned char *buf); // Set up bit reader with a buffer input
	int getWord(int size); // Get next word
private:
	int remained_bits;
	unsigned char *buffer;
};

namespace myMath {
	void linMap (unsigned char *buf, float contrast, int bias);
}
