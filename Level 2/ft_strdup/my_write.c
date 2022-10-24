#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	length = 0;
	char	*strcpy;

	while (src[length])
		length++;
	strcpy = malloc(length + 1);
	if (strcpy != NULL)
	{
		i = 0;
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
