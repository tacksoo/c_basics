#include<stdio.h>

int main() 
{
	char c = 'A';
	char *mystring = "hello world";	
	char strs[] = "HELLO WORLD";
	strs[3]= 'X';

	printf("%s \n", strs);

	// in C, 0 is false, non-zero is true
	/*		
	while(100)
	{
		printf("hello world \n");
	}

	*/

	return 0;
}
