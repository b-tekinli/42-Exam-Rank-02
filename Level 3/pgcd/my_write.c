#include <stdio.h>
#include <stdlib.h>

int main(int ac, char const **av)
{
	int nbr1;
	int nbr2;

	if (ac == 3)
	{
		if ((nbr1 = atoi(av[1])) > 0 && (nbr2 = atoi(av[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}