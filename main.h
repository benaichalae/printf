#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int printf_percent(void);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_binary(va_list val);
int printf_unsigned(va_list args);
int printf_octal(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_rev(va_list args);
int printf_exclusive_string(va_list val);
int printf_rot13(va_list args);
int printf_address(va_list val);
int _putchar(char c);
int _strlen(char *s);
int _strlenc(const char *s);
int *_strcpy(char *dest, char *src);

#endif
