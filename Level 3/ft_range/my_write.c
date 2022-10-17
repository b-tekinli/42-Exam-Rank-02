#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end) 
{
	int	n;
	int	*s;

	n = end >= start ? end - start : start - end;
	if (!(s = (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (end != start)
		*s++ = end > start ? start++ : start--;
	*s = start;
	return (s - n);
}
