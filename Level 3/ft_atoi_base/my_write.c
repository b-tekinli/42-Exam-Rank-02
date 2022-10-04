int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0
	int n = 1;
	int result = 0;

	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i])
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		i++;
	}
	return (result * n);
}