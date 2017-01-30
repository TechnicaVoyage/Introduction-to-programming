//Simple Interest Calculator
#include <stdio.h>

void main(){
	float p,r,t,si;
	printf("___________________________________________________________________\n");
	printf("Simple Interest Calculator\n");
	printf("___________________________________________________________________\n");

	printf("Enter Principal amount: ");
	scanf("%f",&p);

	printf("Enter Rate in percentage: ");
	scanf("%f",&r);

	printf("Enter Time period: ");
	scanf("%f",&t);

	si = p*(r/100)*t;
	
	printf("Simple interest is: %f\n",si);
}
