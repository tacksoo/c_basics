#include<stdlib.h>
#include<stdio.h>

int main() {
	

	FILE *file = fopen("french.ppm","w");
	
	fprintf(file,"P3\n");
	fprintf(file,"# adv prog ppm\n");
	fprintf(file,"600 400\n");
	fprintf(file,"255\n");	

	// create a loop that prints the pixels to the file
	// code here
	
	int i;
	for(i=0; i<450; i++) 
	{	
		int j;
		for(j=0; j<200; j++)
		{
			fprintf(file,"255\n");
			fprintf(file,"0\n");
			fprintf(file,"0\n");
		}

		for(j=0; j<200; j++)
		{
			fprintf(file,"255\n");
			fprintf(file,"255\n");
			fprintf(file,"255\n");
		}

		for(j=0; j<200; j++)
		{
			fprintf(file,"0\n");
			fprintf(file,"0\n");
			fprintf(file,"255\n");
		}
	}

	fclose(file);
}

