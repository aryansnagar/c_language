#include <stdio.h>

int main() {

     // declaring the variable
     float  a, b, result;
     char operator;

     // asking for number from user
     printf("What is the first number: ");
     scanf("%f",&a);
     printf("What is the second number: ");
     scanf("%f",&b);
     printf("Enter the operator( + - * / ): ");
     scanf(" %c",&operator);

     // performing task
     if ( operator == '+'){
          result = a+b;
     } else if (operator == '-'){
          result = a-b;
     } else if (operator == '*'){
          result = a*b;
     } else if (operator == '/'){
          if (b != 0) {
               result = a/b;
          } else {
               printf("The divident can't be 0\n");
               return 1;
          }
     } else {
          printf("Sorry, It isn't a valid operator\n");
          return 1;
     }

     // printing result
     printf("The result is ");
     printf("%f",result);
     printf("\n");
     return 0;
}