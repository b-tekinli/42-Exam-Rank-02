#include <unistd.h>

int	ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	return (n);
}

void print_hex(int p)
{
	char hex[] = "0123456789abcdef";

	if (p >= 16)
		print_hex(p / 16);
	write(1, &hex[p % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}
