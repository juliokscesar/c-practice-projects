#ifndef JKSC_STRING_H
#define JKSC_STRING_H

#include "types.h"
#include "bool.h"

jsize_t strlen(const char* str);
void strcpy(char* dest, const char* src);

// WARNING: strlower can only be used with ARRAY of chars
void strlower(char str[]);

// WARNING: strupper can only be used with ARRAY of chars
void strupper(char str[]);

int strcmp(const char* s1, const char* s2);
int strcasecmp(const char* s1, const char* s2);

#endif // JKSC_STRING_H
