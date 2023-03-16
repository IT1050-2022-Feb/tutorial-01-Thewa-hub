/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1,sub2,avg;//declare the variables type 

  //user input
  printf("Enter the subject 01 marks :");
  scanf("%f",&sub1);
  printf("Enter the subject 02 marks :");
  scanf("%f",&sub2);

  //define the equation
  avg=(sub1+sub2)/2;
  //display the answer 
  printf("The average is %.2f",avg);
  
  
  return 0;
}

