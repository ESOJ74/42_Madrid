#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
int		ft_count(char *str, char *charset);
int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	printf("count occ: %d\n", ft_count("  a  b   b   ", " a   "));
	split = ft_split("ImtmVrV6Ov8QrkGGUglBy7Vgsu iIsdl5XyT35Czv4xeu", "yenORYQ");
	//split = ft_split(argv[1], argv[2]);
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
