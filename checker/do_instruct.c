#include "checker.h"

void	do_instruct(t_pile pile_a, t_pile pile_b, int op)
{
	if (op <= 3)
		swap(pile_a, pile_b, op);
	else if (op > 3 && op <= 5)
		push(pile_a, pile_b, op);
}
