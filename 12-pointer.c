#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int num = 10;

	printf(" %p \n", &num);

	int *ptr;
	ptr = &num;

	printf(" %p \n", ptr);
	printf(" %d \n",*ptr);

	int *ptr2;

	printf(" %d \n", *ptr2);
	return 0;

}
