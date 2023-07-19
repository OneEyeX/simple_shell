#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: the length of string in integer format
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str++)
		i++;
	return (i);
}

/**
 * _strcmp - performs lexicographic comparison of two strings.
 * @str1: the first string
 * @str2: the second string
 *
 * Return: if str1 < str2 returns negative, else if str1 > str2 returns positive, else if str1 == str2 returns zero
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}

/**
 * starts_with - checks if aux starts with str
 * @str: string to search
 * @aux: the substring to find
 *
 * Return: address of next char of str or NULL
 */
char *starts_with(const char *str, const char *aux)
{
	while (*aux)
		if (*aux++ != *str++)
			return (NULL);
	return ((char *)str);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

