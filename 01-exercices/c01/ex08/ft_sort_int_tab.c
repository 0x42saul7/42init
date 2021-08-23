void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int 	j;
	int	higher;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				higher = tab[i];
				tab[i] = tab[j];
				tab[j] = higher;
			}
			j++;
		}
		i++;
	}
}
