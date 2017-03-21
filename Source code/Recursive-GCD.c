//To find Greatest Common Divisor of two numbers using recursive function
#include <stdio.h>

int div=0,largest_gcd;

void gcd(int num1,int num2){
	div++;
	if((num1%div)==0&&(num2%div)==0)
		largest_gcd=div;
	if((num1<num2?num1:num2)>div)
		gcd(num1,num2);
}

void main(){
	int num1,num2;

	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);

	gcd(num1,num2);
	
	printf("GCD is: %d",largest_gcd);
}
