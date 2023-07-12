#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _space - check if a character is a whitespace
 * by converting the last one to Hex Deximal corresponding
 * value
 * @c: the character to check
 *
 * Return: 1 is c is a whitespace, or otherwise 0
 */
int _space(int c)
{
	if (c == 0x20 || (c >= 0x09 && c <= 0x0d))
		return (1);
	return (0);
}


/**
 * strtow - split a string into words by removing spaces
 * @str: a pointer to the string to split
 *
 * Return: NULL if memory allocation failed  or if string
 * is NULL or empty, otherwise return a ptr to the array
 * of words terminated by a NULL cahracter.
 */
char **strtow(char *str)
{
	char **words, *pos = str;
	int w = 0, c;

	if (!(str && *str))
		return (NULL);
	do {
		while (_space(*pos))
			++pos;
		if (!*pos)
			break;
		while (*(++pos) && !_space(*pos))
			;
	} while (++w, *pos);
	if (!w)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (w + 1));
	if (!words)
		return (NULL);
	w = 0, pos = str;
	do {
		while (_space(*pos))
			++pos;
		if (!*pos)
			break;
		for (str = pos++; *pos && !_space(*pos); ++pos)
			;
		words[w] = (char *) malloc(sizeof(char) * (pos - str + 1));
		if (!words[w])
		{
			while (w >  0)
				free(words[--w]);
			free(words);
			return (NULL);
		}
		for (c = 0; str < pos; ++c, ++str)
			words[w][c] = *str;
		words[w][c] = '\0';
	} while (++w, *pos);
	words[w] = NULL;
	return (words);
}
