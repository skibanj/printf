#include "main.h"

/**
 * _printf - A function that prints formatted output:
 * function is declared with a variable
 * argument list using the ... syntax
 * @format: Format string
 * @count: This variable will be used to store
 * the number of characters printed
 * Return: The value of string
 */

int _printf(const char *format, ...)
{
	int count;
	va_list list;

	/**
	 * The function checks if format parameter is NULL
	 * If NULL, function returns -1 indicating an error
	 * If format is not NULL, function initializes the variable
	 * argument (list) using (va_start) which allows us access
	 * the variable argument in the format string
	 */

	if (format == NULL)
		return (-1);

	va_start(list, format);
	count = vprint(format, list);
	va_end(list);

	return (count);

}
