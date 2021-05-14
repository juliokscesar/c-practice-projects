#include "string.h"

jsize_t jstrlen(const char* str)
{
    jsize_t length = 0;

    while (str[length])
    {
        length++;
    }

    return length;
}

void jstrcpy(char* dest, const char* src)
{
    for (jsize_t i = 0, n = jstrlen(src); i < n; i++)
    {
        dest[i] = src[i];
        dest[i + 1] = '\0';
    }
}

BOOL jstrcmp(const char* s1, const char* s2)
{
    jsize_t n1 = jstrlen(s1);
    jsize_t n2 = jstrlen(s2);

    if (n1 != n2)
        return FALSE;

    for (jsize_t i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
            return FALSE;
    }

    return TRUE;
}
