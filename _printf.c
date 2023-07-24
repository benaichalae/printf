#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{	
	convert_match m[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", printf_percent}, {"%i", printf_int},
		{"%d", printf_dec}, {"%b", printf_binary},
		{"%u", printf_unsigned}, {"%o", printf_octal},
		{"%x", printf_hex}, {"%X", printf_HEX},
		{"%r", printf_rev}, {"%S", printf_exclusive_string},
		{"%R", printf_rot13}, {"%p", printf_address}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 14;
		while (j > 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				continue;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

