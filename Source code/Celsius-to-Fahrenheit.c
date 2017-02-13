//To convert Temperature from Celsius to Fahrenheit
#include <stdio.h>

void main() {
  float tempInC,tempInF;
  printf("___________________________________________________________________\n");
	printf("Celsius to Fahrenheit Temperature Converter\n");
	printf("___________________________________________________________________\n");

  printf("Enter temperature in Celsius: ");
  scanf("%f",&tempInC);

  tempInF = (tempInC*9/5)+32;

  printf("Temperature in Fahrenheit is: %f F\n",tempInF);
}
