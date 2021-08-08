#include <unistd.h>
#include <stdio.h>
	
void ft_ft(int *nbr);

void ft_ultimate_ft(int *********nbr);

void ft_swap(int *a, int *b);

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_ultimate_div_mod(int *a, int *b);

void ft_putstr(char *str);

int ft_strlen(char *str);

void ft_rev_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size);

int		main(void)
{
        // ft_ft
	int		nbr;	
	nbr = 21;	
	ft_ft(&nbr);	
	
	if (nbr == 42) 
		printf("\nex00 : nbr = 21 ft_ft(*nbr) : Salida: nbr = %d : ok\n",nbr);
	else
		printf("\nex00 : nbr = 21 ft_ft(*nbr) : Salida: nbr = %d : KO\n",nbr);
	
	// ft_ultimate_ft
	int		*********i;  
	int		********q;		
	int		*******w;
	int		******e;
	int		*****r;
	int		****t;
	int		***y;
	int		**u;
	int 	*Point;         
	int 	num;            
	i = &q;                 
	q = &w;
	w = &e;
	e = &r;
	r = &t;
	t = &y;
	y = &u;
	u = &Point;
	Point = &num;

	num = 21; 
	ft_ultimate_ft(i);  
	
	if (num == 42) 
		printf("ex01 : ft_ultimate_ft(*********nbr) : Salida: %d : ok\n",num);
	else
		printf("ex01 : ft_ultimate_ft(*********nbr) : Salida: %d : KO\n",num);	
	
	
	//ft_swap
	int		uno;                     
	int		dos;
	uno = 21;                         
	dos = 42;   
	ft_swap(&uno, &dos);
	if (uno == 42 && dos == 21) 
		printf("ex02 : a = 21 ; b = 42 ft_swap(&a, &b) : Salida: a = %d,b = %d : ok\n", uno, dos);
	else
		printf("ex02 : a = 21 ; b = 42 ft_swap(&a, &b) : Salida: a = %d,b = %d : KO\n", uno, dos);
	
	// ft_div_mod
	int		in;              
	int		tx;              
	int 	D;              
	int		M;              

	in = 20;                
	tx = 3;                
	D = 0;                 
	M = 0;    
	ft_div_mod(in, tx, &D, &M);
	if (D == in/tx && M == in % tx)
		printf("ex03 : a = 20; b = 3; D = 0; M = 0 ft_div_mod(a, b, &D, &M) : Salida: D = %d, M = %d : ok\n", D, M);
	else
		printf("ex03 : a = 20; b = 3; D = 0; M = 0 ft_div_mod(a, b, &D, &M) : Salida: D = %d, M = %d : KO\n", D, M);
	
	//ft_ultimate_div_mod
	int		il;                     
	int		tl;                     
	il = 20;                        
	tl = 3;                         
	ft_ultimate_div_mod(&il, &tl);
	if (D == in/tx && M == in % tx)
		printf("ex04 : a = 20; b = 3  ft_div_mod(&a, &b) : Salida: a = %d, b = %d : ok\n", il, tl);
	else
		printf("ex04 : a = 20; b = 3  ft_div_mod(&a, &b) : Salida: a = %d, b = %d : KO\n", il, tl);
	
	//ft_putstr	 	
	printf("ex05 : arr[] = {\"Hello\\n\"}  ft_putstr(arr) : La salida debe ser Hello. Salida : \n");
	char	arr[] = {"Hello\n"}; 
	ft_putstr(arr);
	
	//ft_strlen
	int		lenght;					
	
	lenght = ft_strlen(arr);
	if (lenght == 6)
		printf("ex06 : arr[] = {\"Hello\\n\"};   lenght = ft_strlen(arr : Salida: lenght = %d : ok\n", lenght);
	else
		printf("ex06 : arr[] = {\"Hello\\n\"};   lenght = ft_strlen(arr : Salida: lenght = %d : KO\n", lenght);
		
	//ft_rev_int_tab
	
	int	tab[] = {1,2,3,4,5};		
	ft_rev_int_tab(tab, 5);
	printf("ex07 : tab[] = {1,2,3,4,5}; ft_rev_int_tab(tab, 5) : La salida debe ser [5, 4, 3, 2, 1] Salida : \n");
	int cont;

	cont = 0;
	printf("[");
	while (cont < 4)
	{
		printf("%d, ",tab[cont]);
		cont++;
	}
	printf("%d]\n",tab[4]);
	
	//ft_sort_int_tab
	int tab2[] = {5,4,3,2,1,60,43,12};     /* создаем массив чисел который мы будем сортировать */

	ft_sort_int_tab(tab2, 8);
	printf("ex08 : tab[] = {5,4,3,2,1,60,43,12}; ft_sort_int_tab(tab2, 8) : La salida debe ser [1, 2, 3, 4, 5, 12, 43, 60] Salida : \n");
	
	cont = 0;
	printf("[");
	while (cont < 7)
	{
		printf("%d, ",tab2[cont]);
		cont++;
	}
	printf("%d]\n",tab2[7]);	
	return (0);
}






