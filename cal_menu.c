#include <stdio.h>

void main()
{
  int n,a,b;                
   
  printf("Welcome to the Calculator\n\n");
  printf("Enter 2 numbers to perform calculations on: ");
  scanf("%d%d",&a,&b);
  
  printf("----------------------------------------------------------\n");
  
  printf(" Press '1' for Addition\n Press '2' for Subtraction\n Press '3' for Multiplication\n Press '4' for Division\n Press '5' for Modular Division\n");
  printf("Enter your choice: ");
  scanf("%d",&n);
  
  printf("----------------------------------------------------------\n\n");
    
  switch (n){
              case 1: 
                     printf("The addition of the 2 numbers is %f",(float)a+b);
                     break;
                     
              case 2: 
                     printf("The subtraction of the 2 numbers is %f",(float)a-b);   
                     break;
                     
              case 3:
                     printf("The multiplication of the 2 numbers is %f",(float)a*b); 
                     break;
                     
              case 4: 
                     printf("The division of the 2 numbers is %f",(float)a/b);
                     break;                  
                     
              case 5:
                     printf("The modular division (i.e the remainder after divison) of the 2 numbers is %d",a%b);
                     break; 
                            
              default: 
                      printf("Input incorrect");
            }                 
    
} 
