#include "BRCrypto.c"
#include <stdio.h>

int main() {
	uint8_t hash[32];
	int a = 125;
	BRKeccak256(hash, &a, sizeof(a));
	for (int i=0; i < 32; ++i) {
		printf("%d ", hash[i]);
	}
	printf("\n");
	return 0;
}
