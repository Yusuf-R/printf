#include "main.h"

/**
 * str_len - finds the lenght of a string
 *
 * @s: The pointer to the string
 *
 * Return: the length of the string.
 */

unsigned int str_len(char *s)
{
	unsigned int len;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * _memcpy - copy memory area
 *
 * @dest: Destination for copying
 * @src: Source to copy from
 * @s_len: number of bytes to copy
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int s_len)
{
	unsigned int i;

	for (i = 0; i < s_len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * str_rev - reverses a string in place
 *
 * @s: string to reverse
 *
 * Return: A pointer to a character
 */

char *str_rev(char *s)
{
	unsigned int s_len;
	unsigned int i;
	char tmp_str, *s_rev;

	s_len = str_len(s);
	s_rev = malloc(sizeof(char) * (s_len + 1));
	if (s_rev == NULL)
		return (NULL);
	_memcpy(s_rev, s, s_len);
	for (i = 0; i < s_len; i++, s_len--)
	{
		tmp_str = s_rev[s_len - 1];
		s_rev[s_len - 1] = s_rev[i];
		s_rev[i] = tmp_str;
	}
	return (s_rev);
}

/**
 * _putchar_base - sends characters to be written on standard output
 *
 * @str: pointer the string passed
 */

void _putchar_base(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}
