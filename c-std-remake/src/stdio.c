#include "stdio.h"

#include <unistd.h>

#include "string.h"

void puts(const char* str)
{
    write(STDOUT_FILENO, str, strlen(str));
    write(STDOUT_FILENO, "\n", 1);
}

void putc(const char c)
{
    write(STDOUT_FILENO, &c, sizeof(char));
    write(STDOUT_FILENO, "\n", 1);
}
