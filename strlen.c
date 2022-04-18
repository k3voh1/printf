#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 * Return: lenth of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	return (a);
}
