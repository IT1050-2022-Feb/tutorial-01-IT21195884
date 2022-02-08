/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {    //Main function begins

  float dis ;      //Variable declaration
  double amount;
  int x;

  printf("Please enter the total Distance :");   //Prompt
  scanf("%f" , &dis);

  if((dis<31)&&(dis>0))       //Checking the total distance
  {
    amount=dis*50;
  }

  else if(dis>30)
  {
    amount=(30*50) + (dis-30)*40;

  }

  else
  {
    printf("Invalid....Please try again !");
    return -1;      
  }
  
  printf("Your total balance = %.2lf" , amount);       //Final resualts


  return 0;         //End of thr Main function 
}
