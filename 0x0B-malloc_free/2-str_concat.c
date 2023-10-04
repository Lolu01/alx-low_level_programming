#include "main.h"
#include <stdlib.h>
/**
 * _strlen - gets the length of a string
 * @s: string to count
 * Return: int
 */
int _strlen(char *s)
{
int l = 0;
if (s == NULL)
return (0);
while (s[l] != '\0')
l++;
return (l);
}
/**
 * str_concat -  concatenates two strings.
 * @s1: string parameter
 * @s2: string paramter
