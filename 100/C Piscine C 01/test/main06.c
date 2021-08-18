#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str);

int        main(void)
{
    int        lenght;
    char    arr[] = {"Hello\n"};
    
    lenght = ft_strlen(arr);
    if (lenght == 6)
        printf("ex06 : arr[] = {\"Hello\\n\"};   lenght = ft_strlen(arr)\n\nSalida: lenght = %d : ok\n", lenght);
    else
        printf("ex06 : arr[] = {\"Hello\\n\"};   lenght = ft_strlen(arr)\n\nSalida: lenght = %d : KO\n", lenght);
}
