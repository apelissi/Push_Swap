#include "checker.h"

t_pile	get_numbers(int ac, char **av)
{
	t_pile	pile;
	int	i;

	i = ac - 2;
	pile.values =  (int *)malloc((ac - 1) * sizeof(int));
	while(i + 1 > 0)
	{
		if (is_valid(av[i]))
			pile.values[i] = atoi(av[i]);
		else
		{
			pile.size = -1;
			return (pile);
		}
		i--;
	}
	pile.size = ac - 1;
	return (pile);
}
