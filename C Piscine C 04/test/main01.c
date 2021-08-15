#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int main (void)
{
	char str2[] = {"1234567890"};
	char str3[] = "Elefante";
	printf("\n\nex01\nchar str[] = {\"1234567890\"} ; ft_putstr(str);\nSalida : \n");	
	ft_putstr(str2);
        printf("\nchar str[] = \"Elefante\" ; ft_putstr(str);\nSalida : \n");
        ft_putstr(str3); 
        printf("\n");       
}
