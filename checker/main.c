#include "checker.h"

int	main(int ac, char **av)
{
	t_pile	pile_a;
	int	j;

	pile_a = get_numbers(ac, av);
	if (pile_a.size == -1)
		return (write(1, "Error\n", 6));
	put_col(pile_a);
	if ((j = read_instruct(pile_a)) == 1)
		write (1, "OK\n", 3);
	if (j ==  -1)
		write(1, "KO\n", 3);
	else
		write(1, "DD\n", 3);
/*
	while (i)
	{
		read(1, c, 2);
		write(1, c, 2);
		i--;
	}*/
	return (0);
}
