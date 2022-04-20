#include "main.h"
/**
 * _putchar - Print a character
 * @character: The character to print
 * Return: always 1
 */
int _putchar(char character)
{
	write(1, &character, 1);
	return (1);
}
