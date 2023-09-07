#ifndef MAIN_H
#define MAIN_H
/**
 * main.h
 * Author: YovsefMo
 * For: 0x0B-malloc_free
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int _putchar(char c);
int *array_range(int min, int max);
int _strlen(char *s);
int is_digit(char *s);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif /* MAIN_H */
