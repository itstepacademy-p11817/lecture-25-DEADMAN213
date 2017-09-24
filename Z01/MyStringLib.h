#pragma once

#include <inttypes.h>

uint32_t mystrlen(const char* str);
char* mystrncpy(char* str1, const char* str2, uint8_t len);
char* mystrncat(char* str1, char* str2, uint8_t len);
char* mystrchr(char* str, char ch);
char* mystrstr(char* str1, char* str2);
bool mystrcmp(const char* str1, const char* str2);
bool mystrregcmp(const char* str1, const char* str2);