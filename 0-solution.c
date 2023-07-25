#include "main.h"

/**
 * _printf - A function that prints formatted output:
 * function is declared with a variable
 * argument list using the ... syntax
 * @format: Format string
 * Return: The value of string
 */

int _printf(const char *format, ...)
{

	int count;
	va_list list;

	/**
	* The function checks if format is NULL
	* If NULL, function returns -1 indicating an error
	* If format is not NULL, function initializes the variable
	* argument (list) using (va_start) which allows us access
	* the variable argument in the format string
	*/

	if (format == NULL)
	return (-1);

	va_start(list, format);
	count = vprintf(format, list);
	va_end(list);

	return (count);
}
