#include "main.h"

char *string_toupper(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	}
	}
	return (str);
}
