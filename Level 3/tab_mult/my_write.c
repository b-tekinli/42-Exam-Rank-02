#include <unistd.h>

int ft_atoi(char *str) {
    int n = 1;
    int result = 0;
    int i = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            n = 0;
        }
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * n);
}

void ft_putnbr(int n) {
    char c;

    if (n < 0)
    {
        n = -n;
        write(1, "-", 1);
    }
    if (n < 10)
    {
        c = n + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

void tab_mult(int num) {
    int i = 1;

    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(num);
        write(1, " = ", 3);
        ft_putnbr(num * i);
        write(1, "\n", 1);
        i++;
    }
}

int main(int ac, char **av) {
    if (ac == 2)
    {
        tab_mult(ft_atoi(av[1]));
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
