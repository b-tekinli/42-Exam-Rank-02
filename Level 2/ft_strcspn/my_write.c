#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject) {
    int i = 0;
    int j = 0;

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
            {
                return (i);  
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (s[i])
    {
        i++;
    }
    
    return (i);
}

/*
size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}
*/
