#include<stdio.h>
#include<stdlib.h>

int main() 
{
	char str[10];
	
	// itoa() is not available on every distribution
	// itoa(12345,str, 10);
	// instead use sprintf(), but if you are using MINGW you 
	// might as well use itoa()
	
	// sprintf is print as string 
	sprintf(str,"%d",1234567);
	
	printf("The string is %s \n",str);	

	return 0;

}
