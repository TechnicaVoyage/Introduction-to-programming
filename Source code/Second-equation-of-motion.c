//Distance calculation using s = u*t + 1/2at^2

#include <stdio.h>

void main(){
	float u,a,t,s;
	printf("___________________________________________________________________\n");
	printf("Distance calculation using s = u*t + 1/2at^2\n");
	printf("___________________________________________________________________\n");

	printf("Enter initial speed(u): ");
	scanf("%f",&u);

	printf("Enter acceleration(a): ");
	scanf("%f",&a);

	printf("Enter time(t): ");
	scanf("%f",&t);

	s = u*t + (a*t*t/2);

	printf("Distance is: %f\n",s);
}
