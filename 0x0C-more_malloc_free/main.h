#ifndef MAIN_H
#define MAIN_H
#include <limits.h>


char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *malloc_checked(unsigned int b);
int _putchar(char c);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);

#endif
