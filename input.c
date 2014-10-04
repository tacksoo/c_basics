#include <stdio.h>

int main()
{
    puts("Enter your name");
    char name[80];
    fgets(name, sizeof(name), stdin);
    printf("Your name is: %s", name);

    return 0;
}
