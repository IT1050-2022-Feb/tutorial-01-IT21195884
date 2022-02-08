/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int multiply(int num1 , int num2);   //Function calling
int maximum(int num1 , int num2);
int minimum(int num1 , int num2);

int main() {   //Main function begins
   int no1, no2;
   printf("Enter a value for no 1 : ");         //Prompt
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;            //Main function ends
}


int multiply(int num1 , int num2)         //Function implementation
{
  return num1*num2;
}

int maximum(int num1 , int num2)             //Function implementation
{
  int x;

  x=num1-num2;

  if(x>0)
  {
    return num1;
  }

  else
  {
    return num2;
  }
}

int minimum(int num1 , int num2)             //Function implementation
{
  int y;

  y=num1-num2;

  if(y<0)
  {
    return num1;
  }

  else 
  {
    return num2;
  }
}