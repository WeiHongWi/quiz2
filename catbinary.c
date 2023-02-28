#include <stdio.h>
#include <stdlib.h>

int concatenatedBinary(int n)
{
    const int M = 1e9 + 7;
    int len = 0; /* the bit length to be shifted */

    long ans = 0;
    for (int i = 1; i <= n; i++) {
        // as all power of 2 only contains 1 set bit
        /*if (!(i^((i>>len)<<len)))
            len++;*/
	len = len + (__builtin_ffs(i)-1==len);
        ans = (i | (ans<<len)) % M;
    }
    return ans;
}
int main(){
 int  x = 3;
 printf("%d\n",concatenatedBinary(x));
 return 0;
}
