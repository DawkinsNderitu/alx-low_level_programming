#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[k])
		k++;

	if (n >= k)
		l = x + k;
	else
		l = x + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (y < l)
	{
		if (y <= x)
			str[y] = s1[y];

		if (y >= x)
		{
			str[y] = s2[k];
			k++;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
