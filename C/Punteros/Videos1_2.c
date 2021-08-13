#include <stdio.h>

int main(void)
{
    int a;
    
    int *ptr;
    int **ptr2;
    
    a = 3;
    ptr = &a;
    ptr2 = &ptr;
    
    printf("\nDireccion memoria de a = %p\n", ptr);
    printf("Direccion memoria de ptr = %p\n",&ptr);
    printf("Direccion memoria de a = %p\n",&a);
    printf("---------------------------\n");

    printf("Valor de a = %d\n", *ptr);
    printf("Valor de a = %d\n", **ptr2);
    printf("Valor de a = %d\n", a);
    
    printf("---------------------------\n");
    printf("Direccion memoria de ptr = %p\n", ptr2);
    printf("Direccion memoria de ptr2 = %p\n", &ptr2);
    printf("---------------------------\n");
    
    
    *ptr = **ptr2 + 6;
    printf("a = %d\n", a);
    
    **ptr2 = 8;
    printf("a = %d\n", a);
    printf("a = %d\n", *ptr);
    printf("a = %d\n", **ptr2);
    
    return(0);
}
