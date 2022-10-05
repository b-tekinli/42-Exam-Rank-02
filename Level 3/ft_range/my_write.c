#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end) 
{
	int	n;
	int	*s;

	n = start >= end ? start - end : end - start;
	if (!(s= (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (start != end)
		*s++ = start > end ? end++ : end--;
	*s = end;
	return (s - n);
}
