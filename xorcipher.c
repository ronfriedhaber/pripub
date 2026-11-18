#include "xorcipher.h"

// So insecure
int xorcipher_genkey() {
  srandom(1024);
  return random();
}

int xorcipher_encrypt(char *x, size_t n, int key) {
  for  (size_t i = 0; i < n; i++) {
    x[i] = x[i] ^ key;
  }
  return 1;
}

int xorcipher_decrypt(char *c, size_t n, int key) {
  for  (size_t i = 0; i < n; i++) {
    c[i] = c[i] ^ key;
  }
  return 1;
}
