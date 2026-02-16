#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str = "Hello, World!";
    char buffer[20];
    strncpy(buffer, str, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0'; // Ensure null-termination
    printf("%s\n", buffer);
    return 0;
}