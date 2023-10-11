#include "main.h"
#include "6-abs.c"

/**
  * print_last_digit - prints the last digit of a number
  * @n: The number whose last digit is to be printed
  *
  * Return: The last digit of n
  */

int print_last_digit(int n)
{
	int retval = _abs(n) % 10;
	
	_putchar(retval + 48);

	return (retval);
}
