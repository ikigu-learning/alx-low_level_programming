/**
  * _strncpy - copies a string from src to dest
  * @dest: where src is being copied to
  * @src: The source string
  * @n: The no of chars to copy from str
  *
  * Return: The pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (n > c)
	{
		*(dest + c) = *(src + c);
		c++;
	}

	*(dest + c) = '\0';

	return (dest);
}
