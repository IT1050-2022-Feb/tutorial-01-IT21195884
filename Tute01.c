/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

 int main() {      //Main function begins
  int mark1,mark2;    //Variable Declaration
  double average;

  printf("Please enter mark 1 :");      //Prompt
  scanf("%d" , &mark1);

  printf("Please enter mark 2 :");
  scanf("%d" , &mark2);

  puts(" ");     //space line

  average=(mark1 + mark2)/2.0;     //Calculating the average

  printf("The average : %.2lf" ,  average);       //Displaying the final resualts
  
  return 0;   //End of the main function
 }
