#include <unistd.h>

void	str_cap(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);

	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || \
		str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			str_cap(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
