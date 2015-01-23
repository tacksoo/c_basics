#include<stdio.h>
#include<stdlib.h>


int main() {

	FILE *ptr = fopen("pic.ppm","w");

	if( ptr == NULL)
		printf("Error");

	fprintf(ptr, "hello world\n");
	
	return 0;
}
