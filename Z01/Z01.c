#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include "MyStringLib.h"

int main(void) {
	char str[255] = "";
	char buf[255] = "";
	uint8_t len = 0;
	char ch = 0;

	//MYSTRLEN
	printf("Demostration of \"MYSTRLEN\" work!\n");
	printf("Input string: ");
	gets(str);
	printf("Length of string: %i.\n\n", mystrlen(str));

	//MYSTRNCPY
	printf("Demonstration of \"MYSTRNCPY\" work!\n");
	printf("Input string: ");
	gets(str);

	printf("Input length: ");
	scanf("%hhu", &len);

	mystrncpy(buf, str, len);
	printf("Result: \"%s\".\n\n", buf);
	scanf("%*c", &ch);

	//MYSTRNCAT
	printf("Demonstration of \"MYSTRNCAT\" work!\n");
	printf("Input string one: ");
	gets(str);

	printf("Input string two: ");
	gets(buf);

	printf("Input length: ");
	scanf("%hhu", &len);

	mystrncat(str, buf, len);
	printf("Result: \"%s\".\n\n", str);
	scanf("%*c", &ch);

	//MYSTRCHR
	printf("Demonstration of \"MYSTRCHR\" work!\n");
	printf("Input string one: ");
	gets(str);

	printf("Input character: ");
	scanf("%c", &ch);

	char* rez = mystrchr(str, ch);
	rez ? printf("Result: \"%s\".\n\n", rez) : printf("Not found!\n\n");
	scanf("%*c", &ch);

	//MYSTRSTR
	printf("Demonstration of \"MYSTRSTR\" work!\n");
	printf("Input string one: ");
	gets(str);

	printf("Input string two: ");
	gets(buf);

	rez = mystrstr(str, buf, 3);
	rez ? printf("Result: \"%s\".\n\n", rez) : printf("Not found!\n\n");

	//MYSTRCMP
	printf("Demonstration of \"MYSTRCMP\" work!\n");
	printf("Input string one: ");
	gets(str);

	printf("Input string two: ");
	gets(buf);

	mystrcmp(str, buf) ? printf("Equal!\n\n") : printf("Not equal!\n\n");

	//MYSTRREGCMP
	printf("Demonstration of \"MYSTRREGCMP\" work!\n");
	printf("Input string one: ");
	gets(str);

	printf("Input string two: ");
	gets(buf);

	mystrregcmp(str, buf) ? printf("Equal!\n\n") : printf("Not equal!\n\n");

	return 0;
}