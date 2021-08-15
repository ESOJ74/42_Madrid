#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int main (void)
{
	char str[] = {"1234567890"};
        char str1[] = "Elefante";
        printf("ex00\nchar str[] = {\"1234567890\"} ;\nSalida : ");
        printf("%d\n", ft_strlen(str));
        printf("char str[] = \"Elefante\" ;\nSalida : ");
        printf("%d\n", ft_strlen(str1));
 }
