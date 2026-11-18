#include <stdio.h>

#include "xorcipher.h"

int main(void) {
  char s[] = "hello world\0";
  size_t n = 11;

  XorCipherKey key = xorcipher_genkey(0);
  xorcipher_encrypt(s, n, &key);

  printf("%s\n", s); 
  xorcipher_decrypt(s, n, &key);
 
  printf("%s\n", s); 

  return 0;
}
