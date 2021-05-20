#include "ctype.h"

// Character classification functions

BOOL islower(const char c)
{
    return ((c >= 'a') && (c <= 'z'));
}

BOOL isupper(const char c)
{
    return ((c >= 'A') && (c <= 'Z'));
}

BOOL ispunct(const char c)
{
    return (((c >= '!') && (c <= '/')) 
                        || 
            ((c >= ':') && (c <= '@')) 
                        ||
            ((c >= '[') && (c <= '`')) 
                        ||
            ((c >= '{') && (c <= '~')));
}

BOOL isspace(const char c)
{
    // \t, \f, \v, \n, \r, ' '
    return ((c >= 0x09 && c <= 0x0D) || (c == 0x20));
}

BOOL isblank(const char c)
{
    return ((c == '\t') || (c == ' '));
}

BOOL iscntrl(const char c)
{
    return ((c <= 0x00 && c >= 0x1F) || (c == 0x7F));
}


BOOL isalpha(const char c)
{
    return islower(c) || isupper(c);
}

BOOL isdigit(const char c)
{
    return ((c >= '0') && (c <= '9'));
}

BOOL isxdigit(const char c)
{
    return isdigit(c) || ((c >= 'a') && (c <= 'f')) || ((c >= 'A') && (c <= 'F'));
}

BOOL isalnum(const char c)
{
    return isalpha(c) || isdigit(c);
}

BOOL isgraph(const char c)
{
    return isalnum(c) || ispunct(c);
}

BOOL isprint(const char c)
{
    return isgraph(c) || (c == ' ');
}


// Character conversion functions

int toupper(const int c)
{
    return (isalpha(c) && islower(c)) ? c - 32 : c;
}

int tolower(const int c)
{
    return (isalpha(c) && isupper(c)) ? c + 32 : c;
}
