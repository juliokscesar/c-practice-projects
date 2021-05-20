#ifndef JKSC_CTYPE_H
#define JKSC_CTYPE_H

#include "bool.h"

// Character classification functions
BOOL islower(const char c);
BOOL isupper(const char c);
BOOL ispunct(const char c);
BOOL isspace(const char c);
BOOL isblank(const char c);
BOOL iscntrl(const char c);
BOOL isxdigit(const char c);
BOOL isalpha(const char c);
BOOL isdigit(const char c);
BOOL isalnum(const char c);
BOOL isgraph(const char c);
BOOL isprint(const char c);

// Character conversion functions
int toupper(const int c);
int tolower(const int c);

#endif // JKSC_CTYPE_H