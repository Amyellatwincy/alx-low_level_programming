include "main.h"

/**
 * _strchr - string character
 * @s: string
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')/*Declaring While*/
{
if (*s == c) /*if s == c*/
{
return (s); /*return s*/
}

++s;
}

if (*s == c)
{
return (s);
}

return (0);/*values null*/
}
