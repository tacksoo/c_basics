#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) 
{
	int i=0;
	
	for(i=0; i<argc; i++)
	{
		printf("arg %d value %s \n",i, argv[i] );
	}

	if( strcmp(argv[1],"red") == 0 )
	{
		printf("the user entered red \n");
	}

	return 0;
}
