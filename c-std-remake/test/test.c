#include "../src/string.h"
#include "../src/stdio.h"

int main() 
{
    char* str = "hello world!";
    char* str1 = "HELLO WORLD!";

    strlower(str1);

    puts(str1);

    return 0;
}
