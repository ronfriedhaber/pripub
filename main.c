#include <stdio.h>

#include "xorcipher.h"

int main() {
  char* s = "hello world\0";
  size_t n = 11;

  int key = xorcipher_genkey();
  xorcipher_encrypt(s, n, key);
  xorcipher_decrypt(s, n, key);
 
  printf("%s\n", s); 

  return 1;
}
