#include "functions.h"

/**
 * _strlen - Calculate the lenght of a string
 * @s: string
 *
 * Return: lenght of the s string
 */
int _strlen(const char *s)
{
	int count = 0;

	for (; s[count]; count++)
	{}
	return (count);
}
/**
 *_strcmp - Compare two string
 * @s1: First string
 * @s2: Second String
 *
 * Return: Integer number.
 */
int _strcmp(const char *s1, const char *s2)
{
	const char *r = s1, *l = s2;
	int res = 0;

	for (; *r || *l; r++, l++)
	{
		res = *r - *l;
		if (res != 0)
			return (res);
	}
	return (res);
}
/**
 * *_strcpy - Redirections with strings.
 * @dest: the variable contains s1.
 * @src: The variable contains the string.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c, length;

	length = _strlen(src) + 1;
	for (c = 0; c < length && src[c] != '\0'; c++)
		dest[c] = src[c];
	if (c < length)
		dest[c] = '\0';
	return (dest);
}
/**
 * *_strcat - Concatenates two strings.
 * @dest: The variable had within one string.
 * @src: Contains within other string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i1, i2;

	i1 = i2 = 0;
	while (dest[i1])
		i1++;
	while (src[i2])
	{
		dest[i1 + i2] = src[i2];
		i2++;
	}
	return (dest);
}
/**
 * *_strdup - return returns the copy of a string in a pointer.
 * @str: array for duplicate.
 * Return: the copy of array or NULL if the memory is insufficient.
 */
char *_strdup(const char *str)
{
	char *cpy;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	cpy = malloc(size + 1 * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		cpy[i] = str[i];
	return (cpy);
}
