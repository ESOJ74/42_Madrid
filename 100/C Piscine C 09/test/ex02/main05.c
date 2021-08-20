#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	split = ft_split("M7P4EM2oTlJhOTTmXZd      v5VfHZsxPG0t ","t7jQ");
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
}
