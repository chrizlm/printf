#include "main.h"

/**
 * _printf - a custom printf
 * @format: input string
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i;
	char *av_space;
	va_list list;
	char *ch;
	char *s;

	ch = "%c";
	s = "%s";

	if (format == NULL)
		return (-1);

	av_space = create_space();
	if (av_space == NULL)
		return (-1);

	av_space = format;

	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c' &&
format[i - 1] == '%')
			av_space = _handle_format(av_space, ch, list);

		if (format[i] == 's' &&
format[i - 1] == '%')
			av_space = _handle_format(av_space, s, list);

	return (num_char(av_space));
}
