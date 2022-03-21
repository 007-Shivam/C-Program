#include <stdio.h>

int main () {

    int r, c, a[100][100], i, j, tr[100][100];
    
    printf("Enter no. of rows (r) = ");
    scanf("%d", &r);
    printf("Enter no. of columns (c) = ");
    scanf("%d", &c);

    printf ("For Matrix: \n");
    for (i=1; i<=r; i++) {
   	    for (j=1; j<=c; j++) {
   		    printf("Enter a[%d][%d] : ", i, j);
   		    scanf("%d", &a[i][j]);
   	    }
    }
    printf("\nPrinting Matrix...\n");
   
    for (i=1; i<=r; i++) {
   	    printf("\n");
   	    for (j=1; j<=c; j++) {
   		    printf("%d ", a[i][j]);
   	    }
    }

    for (i=1; i<=r; i++) {
   	    for (j=1; j<=c; j++) {
               tr[j][i] = a[i][j];
           }
    }       
    printf("\nTranspose Matrix: \n");

    for (i=1; i<=c; i++) {
   	    printf("\n");
   	    for (j=1; j<=r; j++) {
   		    printf("%d ", tr[i][j]);
   	    }
    }
    return 0; 
}