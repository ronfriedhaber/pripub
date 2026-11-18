#include <stdlib.h>

typedef struct {
  char* key;
  size_t n;
} XorCipherKey;

XorCipherKey xorcipher_genkey(size_t n);
int xorcipher_encrypt(char* x, size_t n, XorCipherKey* key);
int  xorcipher_decrypt(char* c, size_t n, XorCipherKey* key);
