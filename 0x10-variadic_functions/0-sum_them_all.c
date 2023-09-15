#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n:argument
 * @...: argument
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
