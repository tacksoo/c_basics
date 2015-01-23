#include<stdio.h>
#include<stdlib.h>

int main() 
{
	printf("Please enter a char \n");
	char c = getchar();
	getchar(); // for the newline
	
	printf("The user entered %c, what a character \n",c);

	return 0;
	

}
