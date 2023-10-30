/**
  * leet - encodes a string into 1337
  * @x: string to encode
  *
  * Return: pointer to x
  */

char *leet(char *x)
{
	int i = 0;
	int j = 0;
	char letters[6] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[6] = {'4', '3', '0', '7', '1'};

	while (x[i] != '\0')
	{
		while (j < 5)
		{
			if (x[i] == letters[j] || x[i] == letters[j] + 32)
			{
				x[i] = numbers[j];
			}

			j++;
		}

		i++;
		j = 0;
	}

	return (x);
}
