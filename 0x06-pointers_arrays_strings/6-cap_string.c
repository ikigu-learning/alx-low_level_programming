/**
  * cap - changes a lowercase to uppercase
  * @x: the string
  *
  * Return: Nothing
  */

void cap(char *x)
{
	if (*x> 96 && *x < 123)
	{
		*x = *x - 32;
	}
}

/**
  * cap_string - capitalizes all words of string s
  * @s: The string whose words to capitalize
  *
  * Return: Pointer to s
  */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i - 1]) == '"' || (s[i - 1]) == ' ' || (s[i - 1]) == '\n' || (s[i - 1]) == '\t')
		{
			cap(s[i]);
		}

		i++;
	}

	cap(s);

	return (s);
}
