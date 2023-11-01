#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
  * argstostr - concatenates the arguments of a program
  * @ac: the number of args passed to the program
  * @av: an array containing the args to the program
  *
  * Return: a pointer to the concatenated string,
  * NULL if ac or av == 0
  */

char *argstostr(int ac, char **av)
{
	int sum, i, j, k;
	char *str;

	sum = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		sum += _strlen(av[i]) + 1;
	}

	str = (char *)malloc(sizeof(char) * sum);
	k = 0;

	for (i = 1; i < ac; i++)
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

		str[sum] = '\n';
	}

	return (str);
}

