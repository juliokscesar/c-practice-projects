#include "../src/string.h"

#include <stdio.h>

int main() 
{
    char* str = "Hello World!";
    printf("str = %s\n", str);
    printf("%d\n", (int)jstrlen(str));

    char dest[jstrlen(str)];
    jstrcpy(dest, str);
    printf("%s\n", dest);

    printf("%d\n", jstrcmp(str, dest));

    return 0;
}
