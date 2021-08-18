#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "../ex05/ft_stock_str.h"
#include "../ex04/ft_strs_to_tab.c"

void				ft_show_tab(struct s_stock_str *par);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int					main(void)
{
	int					index;
	int					ac;
	char				**av;
	struct s_stock_str	*structs;

	ac = 10;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	index = 0;
	while (index < ac)
	{
		av[index] = (char *)malloc((2 + 1) * sizeof(char));
		av[index][0] = 'x';
		av[index][1] = (char)(index + 'a');
		av[index][2] = '\0';
		index++;
	}
	structs = ft_strs_to_tab(ac, av);
	
	ft_show_tab(structs);
}
