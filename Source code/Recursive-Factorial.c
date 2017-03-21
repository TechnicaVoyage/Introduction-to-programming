//To find factorial of a number using recursive function
#include <stdio.h>

int fact=1;

int factorial(int number) {
  fact=fact*number;
  number--;

  if (number>1)
    factorial(number);

  return fact;
}

void main(){
  int num;

  printf("Enter a number: ");
  scanf("%d",&num);

  printf("Factorial is %d",factorial(num));
}
