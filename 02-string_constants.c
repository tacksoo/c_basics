#include<stdio.h>

int main() 
{
	char c = 'A';
	char *mystring = "hello world";	
	// can change 
	// mystring = "goodbye world";
	char strs[] = "HELLO WORLD";
	// cannot change
	// strs = "GOODBYE WOLRD"; 
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
