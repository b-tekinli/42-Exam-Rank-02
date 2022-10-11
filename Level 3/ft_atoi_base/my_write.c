int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int n = 1;
​
	while (str[i] <= 32)
		i++;
	if (str[i] == '-'||str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	if (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= str_base;
		res += str[i] - 48;
	}
	else if (str[i] && str[i] >= 'A' && str[i] <= 'Z')
	{
		res *= str_base;
		res += str[i] - 55;
	}
	else if (str[i] && str[i] >= 'a' && str[i] <= 'z')
	{
		res *= str_base;
		res += str[i] - 87;
	}
	i++;
	return res * n;
}
