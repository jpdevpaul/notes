/// SHA1Context holds the context of a SHA-1 running hashsum.
typedef struct {
	uint32_t state[5];
	int32_t count[2];
	uint8_t buffer[64];
} SHA1Context;
