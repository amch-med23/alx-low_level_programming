#include "main.h"
/**
 * _atoi - converts strings to integers.
 * @s: the string to operate on.
 *
 * Return: the integer (the representaion of the string).
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int fd = 0;
	int low = 1;
	int svr = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			low *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			svr = 1;
			fd = (fd * 10) + (s[i] - '0');
			i++;
		}

		if (svr == 1)
		{
			break;
		}
		i++;
	}

	fd *= low;
	return (fd);
}
