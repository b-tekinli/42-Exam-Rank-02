#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *r;
	int len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*) malloc(sizeof(int) * len)))
		return (NULL);
	while (len--)
		r[len] = (end >= start) ? start++ : start--;
	return (r);
}
