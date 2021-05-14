#ifndef JKSC_STRING_H
#define JKSC_STRING_H

#include "types.h"
#include "bool.h"

jsize_t jstrlen(const char* str);
void jstrcpy(char* dest, const char* src);
BOOL jstrcmp(const char* s1, const char* s2);

#endif // JKSC_STRING_H
