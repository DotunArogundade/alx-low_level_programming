#ifndef MAIN_H
#define MAIN_H

int _isdigit(int c);
int _isupper(int c);
int mul(int a, int b);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, const char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
