#include <stdio.h>

int main()
{
    puts("Enter your name");
    char* name;
    size_t size;

    int read = getline(&name, &size, stdin);
    printf("Your name is: %s", name);
    printf("You input %d chars including \\n\n", read);

    return 0;
}
