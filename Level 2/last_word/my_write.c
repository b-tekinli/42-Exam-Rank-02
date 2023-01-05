#include <unistd.h>

int	blank(char c)
{
	if (c == ' ' || c == '\t')
		return(1);

	return(0);
}

int	main(int ac, char **av)
{
	unsigned int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i > 0 && blank(av[1][i]))
			i--;
		while (i > 0 && !blank(av[1][i]))
			i--;
		while (av[1][i] && blank(av[1][i]))
			i++;
		while (av[1][i] && !blank(av[1][i]))
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}



// void last_word(char *str) {
//     int i = 0;
//     int j = 0;

//     while (str[i]) {
//         if ((str[i] == ' ' || str[i] == '\0' || str[i] == '\t') && |
//         str[i + 1] >= 33 && str[i + 1] <= 126) {
//             j = i + 1;
//         }
//         i++;
//     }

//     while (str[j] >= 33 && str[j] <= 127) {
//         write(1, &str[j], 1);
//         j++;
//     }
// }

// int main(int ac, char **av) {
//     if (ac == 2) {
//         last_word(av[1]);
//     }
//     write(1, "\n", 1);
//     return (0);
// }

