#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @car: the char to check
 * @delimeter: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char car, char *delimeter)
{
	while (*delimeter)
		if (*delimeter++ == car)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @car: The character to input
 * Return: 1 if car is alphabetic, 0 otherwise
 */

int _isalpha(int car)
{
	if ((car >= 'A' && car <= 'Z') || (car >= 'a' && car <= 'z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts a string to an integer
 * @str: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *str)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; str[i] != '\0' && flag != 2; i++)
	{
		if (str[i] == '-')
			sign *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (str[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

