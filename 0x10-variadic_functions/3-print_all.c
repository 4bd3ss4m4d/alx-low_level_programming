#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any type of argument
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments (strings) to be printed
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i, flag;
	char *str;

	i = 0;
	flag = 0;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			flag = 1;
			break;
		}
		if (format[i + 1] != '\0' && !flag)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
