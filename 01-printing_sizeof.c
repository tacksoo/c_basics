#include<stdio.h>
#include<limits.h>

int main() {

	int x = 0;
	printf("%p\n", &x);
	printf("Linux Rocks!\n");
	printf("%d\n",sizeof(void*));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",INT_MAX);
}
