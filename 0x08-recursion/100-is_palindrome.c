#include "main.h"

int check_palin(char *s, int i, int length);
int _strlen_recursion(char *s);
/**
 * is_palindrome - it checks if a string is a palindrome or not.
 * @s: string to reverse
 *
 * Return: (1) if it is, or (0) it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palin(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palin - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @length: length of the string
 * Return: (1) if palindrome,or (0) if not.
 */

int check_palin(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	if (i >= length)
	{
		return (1);
	}
	return (check_palin(s, i + 1, length - 1));
}
