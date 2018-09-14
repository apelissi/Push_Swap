#include "checker.h"

void	put_col(t_pile pile)
{
	int	i;

	i = pile.size - 1;
	while(i)
	{
		printf("%d\n", pile.values[i]);
		i--;
	}
}
