#include "main.h"
/**
 * conversion_specifiers - convert the specifer according to the case
 * @c: is the char that specifies the case
 * @l: List characters
 * Return: NULL.
 */

int (*conversion_specifiers(const char *c, int l))(va_list)
{
	int i = 0;

	identifierStruct cs_arr[] = {
		{"c", sing_char},
		{"s", str_char},
		{NULL, NULL}
	};

	for (i = 0; cs_arr[i].indentifier != NULL; i++)
	{
		if (cs_arr[i].indentifier[0] == c[l])
		{
			return (cs_arr[i].printer);
		}
	}

	return (NULL);
}

