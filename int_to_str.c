#include "main.h"

/**
 * get_int - a function that gets a char to str
 * @num: number to string
 *
 * Return: a pointer to the created string
 */
char *get_int(int num)
{
	unsigned int temp;
	int length = 0;
	long num_l = 0;
	char *ret;

	temp = _abs(num);
	length = get_numbase_len(temp, 10);
	if (num < 0 || num_l < 0)
		length++;
	ret = malloc(length + 1);
	if (!ret)
		return (NULL);
	fill_numbase_buff(temp, 10, ret, length);
	if (num < 0 || num_l < 0)
		ret[0] = '-';
	return (ret);
}

/**
 * _abs - a function that gets the absolute value
 * @i: integer to get abs for
 *
 * Return: unsigned int abs rep of i.
 */
unsigned int _abs(int i)
{
	if (i < 0)
	{
		return (-(unsigned int)i);
	}
	return ((unsigned int)i);
}

/**
 * get_numbase_len - gets the length of the buffer needed
 * @num: number to get length needed for
 * @base: base of the number
 *
 * Return: length of the buffer
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1;

	while (num > base - 1)
	{
		len++;
		num /= base;
	}
	return (len);
}

/**
 * fill_numbase_buff - fills the buffer
 * @num: number to convert
 * @base: base of the number
 * @buff: buffer to fill
 * @buff_size: size of the buffer
 *
 * Return: Nothing
 */
void fill_numbase_buff(unsigned int num, unsigned int base,
		char *buff, int buff_size)
{
	int rem, i = buff_size - 1;

	buff[buff_size] = '\0';
	while (i >= 0)
	{
		rem = num % base;
		if (rem > 9)
		{
			buff[i] = rem + 87;
		}
		else
			buff[i] = rem + '0';
		num /= base;
		i--;
	}
}
