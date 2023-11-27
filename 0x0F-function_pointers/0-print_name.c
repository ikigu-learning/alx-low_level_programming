#include "function_pointers.h"

/**
  * print_name - calls function pointer passed as argument
  * @f: function to call
  * @name: name that's printed by calling f
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
