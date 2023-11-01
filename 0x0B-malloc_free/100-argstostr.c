#include "main.h"
#include <stdlib.h>

/**
  * _strlen - calculates the length of a string
  * @s: the string to calculate the length of
  *
  * Return: Length of string s
  */

int _strlen(char *s)
{
	int chars = 0;
	char characters = *s;

	while (characters != '\0')
	{
		characters = *(s + chars);

		if (characters == '\0')
		{
			break;
		}

		chars++;
	}

	return (chars);
}

/**
 * copy_str - copies a string
 * @av: an array of strings to copy to location str
 * @str: place to copy strings in av to
 * @k: helper variable
 * @ac: number of strings to copy to str
 *
 * Return: Nothing
 */

void copy_str(char **av, char *str, int k, int ac)
{
	int j, i;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}

		if (av[i][j] == '\0')
		{
			str[k] = '\n';
			k++;
		}
	}
}

/**
  * argstostr - concatenates the arguments of a program
  * @ac: the number of args passed to the program
  * @av: an array containing the args to the program
  *
  * Return: a pointer to the concatenated string,
  * NULL if ac or av == 0
  */

char *argstostr(int ac, char **av)
{
	int size, i, k;
	char *str;

	size = 0;
	k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]) + 1;
	}

	str = (char *)malloc((sizeof(char) * size) + 1);

	if (!str)
	{
		return (0);
	}

	copy_str(av, str, k, ac);

	return (str);
}
