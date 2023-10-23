#include "main.h"
#include "4-strpbrk.c"

/**
  * _strstr - locates a substring
  * @haystack: Mother string
  * @needle: baby string
  *
  * Return: pointer to beginnign of substring
  * or NULL if no substring
  */

char *_strstr(char *haystack, char *needle)
{
	return (_strpbrk(haystack, needle));
}
