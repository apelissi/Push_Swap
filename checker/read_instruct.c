#include "checker.h"

int	read_instruct(t_pile pile_a)
{
	char	instruct[3];
	t_pile	pile_b;
	int	op;
	int	r;

	pile_b.values = NULL;
	pile_b.size = 0;
	while ((r = read(1, instruct, 3) == 3))
	{
		if (!(op = check_instruct(instruct)))
			return (-1);
	//	do_instruct(pile_a, &t_a, pile_b, t_b, op);
	}
	if (r != 3)
		return (-1);
	if (check_tri(pile_a))
		return (1);
	return (0);
}
