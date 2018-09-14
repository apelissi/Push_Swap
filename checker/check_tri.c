int	check_tri(int *pile, int t_p)
{
	int	i;

	i = 0;
	while (i < t_p - 1)
	{
		if (pile[i] > pile [i + 1])
			return (0);
		i++;
	}
	return (1);
}
