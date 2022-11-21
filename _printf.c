#include "main.h"

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t flist[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = parser(format, flist, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
