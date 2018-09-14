#	ifndef CHECKER_H
#	define CHECKER_H

#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct	s_pile
{
	int	*values;
	int	size;
}		t_pile;

int	is_valid(char *str);
t_pile	get_numbers(int ac, char **av);
void	put_col(t_pile pile);
int	read_instruct(t_pile pile_a);
int	check_instruct(char *str);
int	check_tri(t_pile pile);

#endif
