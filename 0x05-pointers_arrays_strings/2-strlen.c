#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: A given string
 * Return: Returns the length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l))
		l++;
	return (l);
}
