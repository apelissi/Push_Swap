#include "checker.h"

void	copy(int *old, int *new, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		new[i] = old[i];
		i++;
	}
}

void	real_push(t_pile pile_a, t_pile pile_b)
{
	int	*col_a;
	int	*col_b;
	int	i;

	i = 0;
	if (pile_b.size)
	{
		col_a = (int *)malloc((pile_a.size + 1) * sizeof(int));
	}
}

void	push(t_pile pile_a, t_pile pile_b, int op)
{
	if 
}
