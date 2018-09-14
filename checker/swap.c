#include "checker.h"

void	real_swap(t_pile pile)
{
	int i;

	if (pile.size >= 2)
	{
		i = pile.values[0];
		pile.values[0] = pile.values[1];
		pile.values[1] = i;
	}
}

void	swap(t_pile pile_a, t_pile pile_b, int op)
{
	if (op == 1 || op == 3)
		real_swap(pile_a);
	if (op == 2 || op == 3)
		real_swap(pile_b);
}
