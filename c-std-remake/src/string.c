#include "string.h"

#include "ctype.h"

jsize_t strlen(const char* str)
{
    jsize_t length = 0;

    while (str[length])
    {
        length++;
    }

    return length;
}

void strlower(char* str)
{
    for (jsize_t i = 0, n = strlen(str); i < n; i++)
        str[i] = tolower(str[i]);
}

void strupper(char* str)
{
    for (jsize_t i = 0, n = strlen(str); i < n; i++)
        str[i] = toupper(str[i]);
}

void strcpy(char* dest, const char* src)
{
    for (; *src; src++)
    {
        *dest = *src;
        *(dest + 1)= '\0';
        dest++;
    }
}

int strcmp(const char* s1, const char* s2)
{
    if (strlen(s1) != strlen(s2))
        return strlen(s1) - strlen(s2);

    for (; *s1 != 0x00 && *s2 != 0x00; s1++, s2++)
    {
        if (*s1 != *s2)
            return *s1 - *s2;

        s2++;
    }

    return 0;
}

int strcasecmp(const char* s1, const char* s2)
{

}
