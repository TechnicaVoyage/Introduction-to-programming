//WAP to prnt prime numbers
#include <stdio.h>

void main() {
	int num,i=2,prime=1;
	
	printf("Please enter a number: ");
	scanf("%d",&num);

	while(i<num/2){
		if(num%i==0){
			prime=0;
			break;
		}
		i++;
	}
	if (prime==1)
		printf("Number is prime\n");
	else
		printf("Number is not prime\n");
}
