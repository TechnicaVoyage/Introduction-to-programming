//To print reverse of a number using recursive function
#include <stdio.h>

int number=0;

void reverse(int num){
	printf("%d",num%10);

	number = num/10;

	if (number>0)
	{
		reverse(number);
	}
}

void main()
{
	printf("Enter number: ");
	scanf("%d",&number);
	printf("Reverse number is: ");
	
	reverse(number);
}
