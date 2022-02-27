#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);
int	proto(char *str);

int	main(int ac, char **av)
{
	int mine;
	int comp;
	int fr;
	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		comp = atoi(av[1]);
		fr = proto(av[1]);
		printf("mine: %d || theirs: %d\n || frdescam: %d\n", mine, comp, fr);
	}
	return (0);
}
