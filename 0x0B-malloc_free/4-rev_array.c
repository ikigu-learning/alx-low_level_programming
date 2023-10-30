/**
  * reverse_array - reverses an array of integers
  * @a: array to reverse
  * @n: length of array a
  *
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int b = *(a + i);
		int e = *(a + j);

		if (i == j || i > j)
		{
			break;
		}

		*(a + i) = e;
		*(a + j) = b;

		i++;
		j--;
	}
}
