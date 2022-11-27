#include "main.h"

/**
 * _handle_format - function
 * to handle format replace with var
 * @format: string input
 * @ft: format
 * @list: va_list type
 * Return: char pointer
 */

char *_handle_format(char *format, char *ft, va_list list)
{
	char *result, *var;
	int i, count = 0, newlen, oldlen;

	if (ft == "%c")
		var = va_arg(list, char) + "";

	if (ft == "%s")
		var = va_arg(list, char *);

	if (var == NULL)
		var = "(null)";

	newlen = strlen(ft);
	oldlen = strlen(var);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (strstr(&format[i], ft) == &format[i])
		{
			count++;
			i += oldlen - 1;
		}
	}

	result = (char *)malloc(i + count * (newlen - oldlen) + 1);

	i = 0;
	while (*format)
	{
		if (strstr(format, ft) == format)
		{
			strcpy(&result[i], var);
			i += newlen;
			format += oldlen;
		}
		else
			result[i++] = *format++;
	}
	result[i] = '\0';
	return result;
}
