#ifndef JKSC_STRING_H
#define JKSC_STRING_H

#include "types.h"
#include "bool.h"

jsize_t strlen(const char* str);
void strcpy(char* dest, const char* src);
void strlower(char* str);
void strupper(char* str);
int strcmp(const char* s1, const char* s2);
int strcasecmp(const char* s1, const char* s2);

#endif // JKSC_STRING_H
