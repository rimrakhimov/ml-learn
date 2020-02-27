#include "BRCrypto.c"
//#include <stdio.h>
#include <string.h>

uint8_t* createKeccak256HashStorage() {
	uint8_t* hash = (uint8_t*) malloc(sizeof(uint8_t)*32);
	memset(hash, 0, sizeof(uint8_t)*32);
	return hash;
}

void keccak_int(void *md32, int n) {
	BRKeccak256(md32, &n, sizeof(int));
}

uint8_t getHashStorage(uint8_t* hash, int index) {
	return hash[index];
}

void destroyKeccak256HashStorage(uint8_t* hash) {
	free(hash);
}

/* int main() {
	uint8_t* hash = createKeccak256HashStorage();
	int a = 125;
	keccak_int(hash, a);
		for (int i=0; i < 32; ++i) {
			printf("%d ", getHashStorage(hash, i));
		}
	printf("\n");

	return 0;
} */
