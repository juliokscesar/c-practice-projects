#include "../src/string.h"
#include "../src/stdio.h"
#include "../src/ctype.h"

int main() 
{
    char str[] = "hello_world!";
    char str1[] = "HELLO WORLD!";

    char* res = strcasecmp(str, str1) ? "not good" : "good";
    puts(res);

    return 0;
}
