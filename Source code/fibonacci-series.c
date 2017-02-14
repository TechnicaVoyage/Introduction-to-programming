//Fibonacci Series
#include <stdio.h>

void main() {
	int i, first=0, second=1, next=0;

	printf("Fibonacci Series is\n");
	for(i=0; i<20; i++)
	{
		printf("%d ",first);
		next = first + second;
		first = second;
		second = next;
	}
	
}