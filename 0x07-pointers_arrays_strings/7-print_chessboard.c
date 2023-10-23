/**
  * print_chessboard - prints a two-dimensional array
  * @a: the two-dimensional array
  *
  * Return: nothing
  */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;



	while (i < 8)
	{

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}

		if (j == 8)
		{
			_putchar('\n');
		}

		i++;
		j = 0;
	}
}
