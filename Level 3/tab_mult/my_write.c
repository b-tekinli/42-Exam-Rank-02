#include <unistd.h>

int ft_atoi(char *str) {
    int i = 0;
    int n = 1;
    int result = 0;

    if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            n = -1;
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

void ft_putchar(char c) {
    write(1, &c, 1);
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

void print_table(int n) {
    int i = 1;

    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(n);
        write(1, " = ", 3);
        ft_putnbr(i * n);
        write(1, "\n", 1);
        i++;
    }
}

int main(int ac, char **av) {
    if (ac == 2)
    {
        print_table(ft_atoi(av[1]));
    }
    else {
        write(1, "\n", 1);
    }
    return (0);
}
