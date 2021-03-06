#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
char *_strstr(char *haystack, char *needle);

#endif
