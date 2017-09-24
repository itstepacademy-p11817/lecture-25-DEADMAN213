#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>
#include "MyStringLib.h"

uint32_t mystrlen(const char* str) {
	uint32_t len = 0;
	while (*str++) {
		len++;
	}

	return len;
}

char* mystrncpy(char* str1, const char* str2, uint8_t len) {
	char* returnValue = str1;

	for (uint8_t i = 0; i < len && *str2; i++) {
		*str1++ = *str2++;
	}
	*str1 = '\0';

	return returnValue;
}

char* mystrncat(char* str1, char* str2, uint8_t len) {
	char* returnValue = str1;
	while (*str1++);
	str1--;

	for (uint8_t i = 0; i < len && *str2; i++) {
		*str1++ = *str2++;
	}
	*str1 = '\0';

	return returnValue;
}

char* mystrchr(char* str, char ch) {
	while (*str) {
		if (*str == ch) {
			return str;
		}
		str++;
	}

	return NULL;
}

char* mystrstr(char* str1, char* str2) {
	while (*str1 && *str2) {
		char* pstr1 = str1;
		char* pstr2 = str2;

		while (*pstr2 && *pstr1 == *pstr2) {
			pstr1++;
			pstr2++;
		}

		if (!*pstr2) {
			return str1;
		}

		str1++;
	}

	return NULL;
}

bool mystrcmp(const char* str1, const char* str2) {
	while (*str1 && *str2 && *str1 == *str2) {
		str1++;
		str2++;
	}

	if (*str1 == *str2)
		return true;

	return false;
}

bool mystrregcmp(const char* str1, const char* str2) {
	while (*str1 && *str2 && tolower(*str1) == tolower(*str2)) {
		str1++;
		str2++;
	}

	if (*str1 == *str2)
		return true;

	return false;
}