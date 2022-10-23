void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	unsigned int	j;
	int		tmp;

	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = 0;
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
