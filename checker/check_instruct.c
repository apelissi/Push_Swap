#include "checker.h"



int	check_swap(char *str)
{
	if (str[0] == 's')
	{
		if (str[1] == 'a')
			return (1);	
		if (str[1] == 'b')
			return (2);	
		if (str[1] == 's')
			return (3);
	}
	return (0);
}

int	check_push(char *str)
{
	if (str[0] == 'p')
	{
		if (str[1] == 'a')
			return (4);	
		if (str[1] == 'b')
			return (5);	
	}
	return (0);
}

int	check_rotate(char *str)
{
	if (str[0] == 'r')
	{
		if (str[1] == 'a')
			return (6);	
		if (str[1] == 'b')
			return (7);
		if (str[1] == 'r')
			return (8);
	}
	return (0);

}

int	check_reverse_rotate(char *str)
{
	char	c;

	read(1, &c, 1);
	if (str[0] == 'r' && str[1] == 'r' && c == '\n')
	{
		if (str[2] == 'a')
			return (9);
		if (str[2] == 'b')
			return (10);
		if (str[2] == 'r')
			return (11);
	}
	return (0);
}

int	check_instruct(char *str)
{
	int	i;

	if (str[2] == '\n')
	{
		if ((i = check_swap(str)))
			return (i);
		else if ((i = check_push(str)))
			return (i);
		else if ((i = check_rotate(str)))
			return (i);
	}
	else if ((i = check_reverse_rotate(str)))
		return (i);
	return (0);
}
