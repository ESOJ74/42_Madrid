#include <unistd.h>

#include "../ex04/ft_strs_to_tab.c"
#include "../ex05/ft_stock_str.h"

void				ft_show_tab(struct s_stock_str *par);

int					main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
