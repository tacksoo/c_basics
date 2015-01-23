#include<stdlib.h>  // dynamic memory allocations are defined here
#include<stdio.h>

int main()
{
    int count;
    int i;
    float *prices;
    printf("Enter the number of items you need summed up: ");
    scanf("%d",&count);

    prices = (float *) malloc(count * sizeof(float));

    if(prices == NULL)
    {
        printf("Allocation failure");
        exit(1);
    }

    for(i=0; i<count; i++)
    {
        printf("Enter price of item\n");
        scanf("%f",prices+i);  // &prices[i] in array syntax
    }

    for(i=0; i<count; i++)
    {
        printf("%f\n",*(prices+i)); // prices[i] in array syntax
    }
}
