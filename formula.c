#include <stdio.h>

//SI, degree c to f, speed v=u+at, s=ut +1/2 ut2, f=ma

void main(){
	//int choice=0;
	float p,r,t,si;
	//printf("Choose what you want calculate.\n1. Simple Interest\n2. Temperature conversion (ºC to ºF)\n3. Speed using v=u+at\n4. Distance\n5. Force using F=m*a");
	printf("___________________________________________________________________\n");
	printf("Simple Interest Calculator\n");
	printf("Enter Principal amount: ");
	scanf("%f",&p);
	printf("Enter Rate in percentage: ");
	scanf("%f",&r);
	printf("Enter Time period: ");
	scanf("%f",&t);
	si = p*(r/100)*t;
	printf("Simple interest is: %f\n",si);
}
