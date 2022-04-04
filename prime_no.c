#include <stdio.h>

void main() {

  int n,cnt=0;
  printf("Enter a number to check if it is Prime or Not: ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++) { 
    if (n%i==0) { 
      cnt++;
    }
  }            
  if (cnt == 1) { 
    printf("\nIt is a neither PRIME nor COMPOSITION NUMBER.\n");
  }
  else if (cnt == 2) {
    printf("\nIt is a Prime Number \n");                 
  }
  else {
    printf("\nIt is a Composite Number\n");
  }
} 
