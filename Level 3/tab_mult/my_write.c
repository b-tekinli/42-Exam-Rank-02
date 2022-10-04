#include <unistd.h>

int ft_atoi(char *str) {
    int n = 1;
    int result = 0;

    if (*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    if (*str == '-')
	{
		n = -1;
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void multi(int nb)
{
	int	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(i * nb);
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		multi(ft_atoi(av[1]));
	else
		ft_putchar('\n');
	return (0);
}