#include "xorcipher.h"

// So insecure
XorCipherKey xorcipher_genkey(size_t n) {
  srandom(4096);

  if (n <= 0) {
  	n = 1024;
  }
  char* key = malloc(n * sizeof(char));

  for (size_t i = 0; i < n; i++) {
    key[i] = (char)(random() % 256);
  }

  XorCipherKey o;o.key=key;o.n=n;

  return o;
}

int xorcipher_encrypt(char *x, size_t n, XorCipherKey* key) {
  for (size_t i = 0; i < n; i++) { x[i] = x[i] ^ key->key[i % n];}
  return 1;
}

int xorcipher_decrypt(char *c, size_t n, XorCipherKey* key) {
  for (size_t i = 0; i < n; i++) {c[i] = c[i] ^ key->key[i % n];}
  return 1;
}
