#include "main.h"
#include <stdlib.h>

/**argstostr - Function that concatenates all arguments of a program
 * @ac: Number of arguments
 * @av: array containing arguments
 *
 * Return: Pointer to string that contains all arguments
 * else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	int k = 0;
	char *str = NULL;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		len += j;
	}
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
