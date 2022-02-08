/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {          //Main function begins

  int i,n;          //Variable declaration
  int sum=0;

  printf("Please enter any number :");          //Prompt
  scanf("%d" , &n);

  if(i<0)         //Check weather the user inputs are valid or not
  {
    printf("Invalid Number !");

  }

  else
  {
    for(i=0;i<n+1 ; i++)         //Calculating final sum using for Loop
    {
      sum=sum+i;
    }
  }


  printf("The final Answer : %d" , sum);        //Displaying the final answer
  
  return 0;   //End of the main function
}

