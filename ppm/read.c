#include<stdio.h>
#include<stdlib.h>

int main() 
{
	FILE *file = fopen("dutch.ppm","r");

	char str[100];

	fgets(str,100,file);
	printf("%s",str);
		
	fgets(str,100,file);
	printf("%s",str);

	fgets(str,100,file);
	printf("%s",str);

	fgets(str,100,file);
	int num = atoi(str);

	printf("%d\n",num);

}
