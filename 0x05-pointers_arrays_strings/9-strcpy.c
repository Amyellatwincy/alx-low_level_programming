#include "main.h"

/**
 * _strcopy - copiar el contendio de uno a otra variable
 * @dest: This is destiny
 * @src: This is the copia
 * Return: thi return copy
 */
char *_strcopy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
