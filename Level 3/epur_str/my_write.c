#include <unistd.h>

void epur_str(char *str)
{
	char sp = -1;
	int i = 0;

	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (sp == 1)
				write(1, " ", 1);
			sp = 0;
			write(1, &str[i], 1);
		}
		else if (sp == 0)
			sp = 1;
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
