#include <stdlib.h>

// typedef struct {
//   int key;
// } XorCipherKey;

int xorcipher_genkey();
int xorcipher_encrypt(char* x, size_t n, int key);
int  xorcipher_decrypt(char* c, size_t n, int key);
