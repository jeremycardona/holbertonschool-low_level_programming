#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
void reset_to_98(int *);
void swap_int(int *a, int *b);
int _strlen(char *);
void _puts(char *);
void print_rev(char *s);
void rev_string(char *);
void puts2(char *);
void puts_half(char *);
void print_array(int *, int);
char *_strcpy(char *, char *);
int _atoi(char *);
char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);
int _strcmp(char *, char *);
void reverse_array(int *, int);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);


#endif
