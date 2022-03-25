#include <stdio.h>

int main(void) {
	
	int T;
    scanf("%d", &T);
    
    while (T--)  {
        
        int n, j, x, k;
        int size=1000, fac[size], carry=0;
        scanf("%d", &n);
        
        j=size-1;
        fac[size-1]=1;
        
        while (n>1) {
            for (k=size-1; k>=j; k--) {
                x = fac[k]*n + carry;
                fac[k] = x%10;
                carry = x/10;
            }
            
            while (carry>0) {
                fac[--j] = carry%10;
                carry /=10;
            }
            n--;
        }
        
        for (k=j; k<size; k++) {
            printf("%d", fac[k]);
        }
        printf("\n");
    }
	return 0;
}

