#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *file = fopen("dutch.ppm","w");
	
	fprintf(file,"P3\n");
	fprintf(file,"# bunch of dots\n");
	fprintf(file,"600 450\n");
	fprintf(file,"255\n");

	int i;
	for(i=0; i<150; i++)
	{
		int j;
		for(j=0; j<600; j++)
		{
			fprintf(file,"255\n");
			fprintf(file,"0\n");	
			fprintf(file,"0\n");	
		}
	}

	for(i=0; i<150; i++)
	{
		int j;
		for(j=0; j<600; j++)
		{
			fprintf(file,"255\n");
			fprintf(file,"255\n");
			fprintf(file,"255\n");
		}
	}

	for(i=0; i<150; i++)
	{
		int j;	
		for(j=0; j<600; j++)
		{
			fprintf(file,"0\n");
			fprintf(file,"0\n");
			fprintf(file,"255\n");
		}
	}
	fclose(file);

}

















