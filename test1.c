#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

uint64_t next_pow2(uint64_t x);
/*int main(){
   unsigned long x = 101;
   printf("%lu\n",next_pow2(x));
   return 0;
}*/
uint64_t next_pow2(uint64_t x){
   int number = __builtin_clzl(x);
   
   x |= 0xffffffffffffffff;
   x = x<<number;
   x = x>>number;

   return x+1;
}
