#include <stdio.h>

void main()
{
  char ch;
  printf("Enter an Alphabet to check if it is Vowel or Consonent: ");
  scanf("%s",&ch);
  printf("****************************************************************************S**\n");
  
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                                                                       printf("The Alphabet is Vowel");
                                                                     }
     
  else { 
         printf("The Alphabet is Consonent");
       }                                                                        

}
