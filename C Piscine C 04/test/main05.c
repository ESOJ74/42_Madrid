#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("\n\nex05\nft_atoi_base(\"42 + 893 --\", \"01\"\nSalida :\n");
	printf("%d\n", ft_atoi_base("  -+-42 + 893 --", "01234"));
	printf("\nft_atoi_base(\"  --+-042 + 893 --\", \"0123456789\"\nSalida :\n");
	printf("%d\n", ft_atoi_base("--+-042", "0123456789"));
	printf("\n");       
}
