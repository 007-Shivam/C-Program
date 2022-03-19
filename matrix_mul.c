#include <stdio.h>

void main () {

  int r1, c1, r2, c2, a[10][10], b[10][10], i, j, k, mul[10][10];
  
  printf("Enter no. of rows (r1) for Matrix A = ");
  scanf("%d", &r1);
  printf("Enter no. of column (c1) for Matrix A = ");
  scanf("%d", &c1);
 
   printf("Matrix A :\n");  
   for (i=0; i<r1; i++) {
   	for (j=0; j<c1; j++) {
   		printf("Enter a[%d][%d] : ", i, j);
   		scanf("%d", &a[i][j]);
   	}
   }
   printf("\nPrinting Matrix A ...\n");
   
   for (i=0; i<r1; i++) {
   	printf("\n");	
   	for (j=0; j<c1; j++) {
   		printf("%d ", a[i][j]);
   	}
   }
   
   printf("\nEnter no. of rows (r2) for Matrix B = ");
   scanf("%d", &r2);
   printf("Enter no. of column (c2) for Matrix B = ");
   scanf("%d", &c2);
   
   if (r2 != c1) {
   	printf("Cannot Multiply");
   }
   else {	
      printf("\n\nMatrix B :\n");
      for (i=0; i<r2; i++) {
   	   for (j=0; j<c2; j++) {
   		   printf("Enter b[%d][%d] : ", i, j);
   		   scanf("%d", &b[i][j]);
   	   }
      }
      printf("\nPrinting Matrix B ...\n");
   
      for (i=0; i<r2; i++) {
   	   printf("\n"); 	
   	   for (j=0; j<c2; j++) {
   		   printf("%d ", b[i][j]);
   	   }
      }
      printf("\n\nThe product of Matrix is :\n");
   	   
      for(i=0; i<r1; i++) {    
         for(j=0; j<c2; j++) {    
            mul[i][j]=0;    
            for(k=0; k<r2; k++) {    
               mul[i][j] += (a[i][k]*b[k][j]);    
            }    
         }    
      }    
         
      for(i=0; i<r1; i++) {    
         for(j=0; j<c2; j++) {    
            printf("%d\t",mul[i][j]);    
         }    
         printf("\n");    
      }
   } 		
}