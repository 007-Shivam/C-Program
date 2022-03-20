#include <stdio.h>

void main () {

  int r, c, a[10][10], b[10][10], i, j, sum[10][10];
  
  printf("Enter no. of rows (r) = ");
  scanf("%d", &r);
  printf("Enter no. of columns (c) = ");
  scanf("%d", &c);	
 
   printf("Matrix A :\n");  
   for (i=0; i<r; i++) {
   	for (j=0; j<c; j++) {
   		printf("Enter a[%d][%d] : ", i, j);
   		scanf("%d", &a[i][j]);
   	}
   }
   printf("\nPrinting Matrix A ...\n");
   
   for (i=0; i<r; i++) {
   	printf("\n");
   	
   	for (j=0; j<c; j++) {
   		printf("%d ", a[i][j]);
   	}
   }
   
   printf("\n\nMatrix B :\n");
   for (i=0; i<r; i++) {
   	for (j=0; j<c; j++) {
   		printf("Enter a[%d][%d] : ", i, j);
   		scanf("%d", &b[i][j]);
   	}
   }
   printf("\nPrinting Matrix B ...\n");
   
   for (i=0; i<r; i++) {
   	printf("\n");
   	
   	for (j=0; j<c; j++) {
   		printf("%d ", b[i][j]);
   	}
   }
   
   printf("\n\nThe Sum of Matrix is :\n");
   	   
   for (i=0; i<r; i++) {
   	for (j=0; j<c; j++) {
   		sum[i][j] = a[i][j] + b[i][j];
   		printf("%d\t", sum[i][j]);
   	}
   	printf("\n"); 
   }		
}
