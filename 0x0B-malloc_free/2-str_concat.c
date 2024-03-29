#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: paramater for string 1
 * @s2: parameter for string 2
 * Return: strDup
 */

char *str_concat(char *s1, char *s2)
{
	char *strDup;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	strDup = malloc(sizeof(char) * (a + b + 1));

	if (strDup == NULL)
		return (NULL);

	a = b = 0;

	while (s1[a] != '\0')
	{
		strDup[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		strDup[a] = s2[b];
		a++, b++;
	}

	strDup[a] = '\0';
	return (strDup);
}
