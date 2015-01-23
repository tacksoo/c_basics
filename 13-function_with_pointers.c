#include<stdio.h>
#include<stdlib.h>
#include "subtract.h"

int add_two_numbers(int a, int b);
void change_two_numbers(int *a, int *b);

int main() 
{
	int x = 10;
	int y = 20;

	int *ptr;
	ptr = &x;
	
	printf("The address of x is %p \n", ptr);
	printf("The value of x is %d \n", *ptr);

	change_two_numbers(&x,&y);

	int sum = add_two_numbers(x,y);

	printf("The sum is %d \n", sum);
	printf("The subtraction is %d \n", subtract(x,y) );

	return 0;
}

void change_two_numbers(int *a, int *b)
{
	*a = -10;
	*b = -20;
}

int add_two_numbers(int a,int b)
{
	int sum = a + b;
	return sum;
}
