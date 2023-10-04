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
while (s[l] != '\0' && s[l] != ' ')
l++;
return (l);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to cahr pointer
 */
char **strtow(char *str)
