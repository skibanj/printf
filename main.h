#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - A function that prints formatted output
 * using a variable argument list.
 * @format: Format string
 * @...: Variable arguments to be formatted according to 'format'
 *
 * Return: The total number of characters printed.
 *         -1 if there is an error or if 'format' is NULL.
 */
int _printf(const char *format, ...);
#endif /* MAIN_H */
