#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main() {

	char msg[SIZE];

	printf("Please enter a string \n");

	int i=0;
	char c;

	while( (i<(SIZE-1)) && (c = getchar()) != '\n' )  
	{
		msg[i] = c;
		i++;
	}

	msg[i] = '\0';

	printf("The user just entered  %s \n", msg);
	
	return 0;	

}
