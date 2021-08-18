#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_putstr(char *str);

int        main(void)
{
    printf("ex05 : arr[] = {\"Hello\\n\"}  ft_putstr(arr)\n\nLa salida debe ser Hello.\nSalida : \n");
    char    arr[] = {"Hello\n"};
    ft_putstr(arr);
}
