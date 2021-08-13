#include <stdio.h>

int main(void)
{
    int a;    
    int *ptr;
    
    a = 56;
    ptr = &a;
    
    system("clear");
    printf("--------Video 3--------------\n");
    printf("Valor de a = %d\n", a);
    printf("Valor de a = %d\n", *ptr);
    
    *ptr = 78;
    
    printf("Valor de a = %d\n", a);
    printf("Valor de a = %d\n", *ptr);
    
    printf("--------Video 4--------------\n");
    
    printf("\nDireccion memoria de ptr = %p\n", ptr);
    printf("Direccion memoria de ptr + 1 = %p\n", ptr + 1); //Avanza 4 posiciones
    printf("Direccion memoria de ptr + 2 = %p\n", ptr + 2); //por ser int
    
    printf("\n---------------------------\n");
    
    char b;
    char *ptr2;
    printf("\nDireccion memoria de ptr2 = %p\n", ptr2);
    printf("Direccion memoria de ptr2 + 1 = %p\n", ptr2 + 1); //Avanza 1 posiciones
    printf("Direccion memoria de ptr2 + 2 = %p\n", ptr2 + 2); //por ser char
    
    printf("\n---------------------------\n");
    
   
    int a1;
    int b1;
    int *pt;
    
    a1 = 56;
    b1 = 23;
    pt = &a1;
    
    
    printf("Direccion memoria de a1 =       %p\n", &a1);
    printf("Direccion memoria de pt =       %p\n", pt);    
    printf("Direccion memoria de b1 =       %p\n", &b1);
    printf("Direccion memoria de pt + 1 =   %p\n", pt + 1);    
    
    printf("valor de a1 = %d\n", a1);
    printf("Valor en pt = %d\n", *pt); 
    printf("valor de b1 = %d\n", b1);
    printf("Valor en pt + 1 = %d\n", *(pt + 1));      
    *(pt + 1) = 150;
    printf("valor de b1 = %d\n", b1);
    
    
    printf("---------------------------\n");  
        
    return(0);
}
