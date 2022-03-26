#include <stdio.h>

int main () {

    int n, t1=0, t2=1, t3=0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    t3 = t1 + t2;

    printf("The Fibonacci Series: %d, %d,  ", t1, t2);

    for (int i=3; i<=n; i++) {
        printf("%d, ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
return 0;
}