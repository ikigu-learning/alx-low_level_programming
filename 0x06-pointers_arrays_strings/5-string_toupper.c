/**
  * string_toupper - changes all lowercase chars of a string to uppercase
  * @x: the string
  *
  * Return: Pointer to the string
  */

char *string_toupper(char *x)
{
	int j = 0;

	while (x[j] != '\0')
	{
		if (x[j] > 96 && x[j] < 123)
		{
			x[j] = x[j] - 32;
		}

		j++;
	}

	return (x);
}
