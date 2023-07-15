#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory to an array
 * @b: bytes of memory needed per size requested
 * @size: size in bytes of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int b, unsigned int size)
{
	unsigned int i;
	char *p;

	if (b == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / b || b >= UINT_MAX / size)
		return (NULL);
	p = malloc(size * b);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < b * size; i++)
		p[i] = 0;
	return ((void *)p);
}
/**
 * add_arrays - adds 2 arrays of ints
 * @mul_result: pointer to array with numbers.
 * @sum_result: pointer to array with numbers from the total sum.
 * @length_t: length of given arrays.
 *
 * Return: void
 */
void add_arrays(int *mul_result, int *sum_result, int len_r)
{
	int i = 0, len_r2 = len_r - 1, carry = 0, sum;

	while (i < len_r)
	{
		sum = carry + mul_result[len_r2] + sum_result[len_r2];
		sum_result[len_r2] = sum % 10;
		carry = sum / 10;
		i++;
		len_r2--;
	}
}
/**
 * is_digit - checks for digits
 * @c: input character to check for digit
 *
 * Return: 0 failure, 1 success
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	printf("Error\n");
	return (0);
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @len_1: length of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @len_2: length of factor 2
 * @length_t: length of result arrays.
 *
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int len_1, char *num2, int len_2, int length_t)
{
	int i = 0, j = len_1 - 1;
	int k, product, carry, digit, *mul_result, *sum_result;

	sum_result = _calloc(sizeof(int), (length_t));
	while (i < len_1)
	{
		mul_result = _calloc(sizeof(int), length_t);
		k = len_2 - 1, digit = (length_t - 1 - i);
		if (!is_digit(num1[j]))
			return (NULL);
		carry = 0;
		while (k >= 0)
		{
			if (!is_digit(num2[k]))
				return (NULL);
			product = (num1[j] - '0') * (num2[k] - '0');
			product += carry;
			mul_result[digit] += product % 10;
			carry = product / 10;
			digit--, k--;
		}
		add_arrays(mul_result, sum_result, length_t);
		free(mul_result);
	    i++, j--;
	}
	return (sum_result);
}
/**
 * print_res - prints array of elements.
 * @sum_result: pointer to int array with numbers to add.
 * @length_t: length of the array.
 *
 * Return: void
 */
void print_res(int *sum_result, int length_t)
{
	int i = 0;

	while (sum_result[i] == 0 && i < length_t)
		i++;
	if (i == length_t)
		_putchar('0');
	while (i < length_t)
		_putchar(sum_result[i++] + '0');
	_putchar('\n');
}
/**
 * str_long - calculates the string length
 * @str: input pointer to string
 *
 * Return: it returns an integer (length of string).
 */

int str_long(char *str)
{
	int length;
  
	for (length = 0; *str != '\0'; length++)
		length++, str++;
	return (length / 2);
}

/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 *
 * Return: 0, Success
 */
int main(int argc, char *argv[])
{
	int len_1, len_2, length_t, temp, *sum_result;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len_1 = str_long(argv[1]), len_2 = str_long(argv[2]);
	length_t = len_1 + len_2;
	if (len_1 < len_2)
		num1 = argv[1], num2 = argv[2];
	else
	{
		num1 = argv[2], num2 = argv[1];
		temp = len_2, len_2 = len_1, len_1 = temp;
	}
	sum_result = multiply(num1, len_1, num2, len_2, length_t);
	if (sum_result == NULL)
		exit(98);
	print_res(sum_result, length_t);
	return (0);
}
