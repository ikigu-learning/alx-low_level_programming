/**
  * string_toupper - changes all lowercase chars of a string to uppercase
  * @x: the string
  *
  * Return: Pointer to the string
  */

char *string_toupper(char *x)
{
	int j = 0;

	if (x[j] > 96 && x[j] < 123)
	{
		x[j] = x[j] - 32;
	}

	return (x);
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
		if (s[i] == 32 || s[i] == '\t' || s[i] == '(' || s[i] == '{' || s[i] == '\n')
		{
			string_toupper(s + (i + 1));
		}
		else if (s[i] == '!' || s[i] == '?' || s[i] == '.' || s[i] == ';' || s[i] == '}' || s[i] == ')')
		{
			if (s[i + 1] == 32)
			{
			string_toupper(s + (i + 2));
			}
		}
		else if (s[i] == '"')
		{
			if (s[i - 1] == 32)
			{
				string_toupper(s + (i + 1));
			}
			else
			{
				string_toupper(s + (i + 2));
			}
		}

		i++;
	}

	return (s);
}
