#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strlen - gets the length of a string
 * @s: string to count
 * Return: int
 */
int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
l++;
return (l);
}
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: args count
 * @av: args strings
 * Return: char pointer
