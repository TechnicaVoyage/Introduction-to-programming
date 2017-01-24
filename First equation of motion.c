//Final speed calculation using v = u + a*t
#include <stdio.h>

void main(){
	float u,a,t,v;
	printf("___________________________________________________________________\n");
	printf("Speed Calculation using v=u+at\n");
	printf("Enter initial speed(u): ");
	scanf("%f",&u);
	printf("Enter acceleration(a): ");
	scanf("%f",&a);
	printf("Enter time(t): ");
	scanf("%f",&t);
	v = u + (a*t);
	printf("Final speed is: %f\n",v);
}
