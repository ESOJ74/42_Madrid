#include <stdio.h>

int main(void)
{
	system("clear");
	printf("--------Video 5--------------\n");
	int tab[3];
	int *ptr;
	
	ptr = tab;	
	printf("%p\n", tab);
	printf("%p\n", ptr);
	printf("---------------------------\n");
	tab[0] = 478;
	printf("%d\n", *tab);
	printf("%d\n", tab[0]);
	printf("---------------------------\n");
	tab[1] = 800;	
	printf("%d\n", *(tab + 1));
	printf("%d\n", tab[1]);
	printf("---------------------------\n");
	*(tab + 2) = 12;	
	printf("%d\n", *(tab + 2));
	printf("%d\n", tab[2]);
	
	printf("\n----------tab2-------------\n");	
	
	int *tab2[2];
	
	tab2[0] = tab;
	
	printf("%d\n", tab2[0][0]);
	printf("%d\n", tab2[0][1]);
	printf("%d\n", tab2[0][2]);
	
	printf("%d\n", *tab2[0]);
	printf("%d\n", *(tab2[0] + 1));
	printf("%d\n", *(tab2[0] + 2));
	
	printf("\n---------------------------\n");
	
	tab2[0][2] = 18;
	printf("%d\n", tab[2]);
	printf("%d\n", tab2[0][2]);
	printf("%d\n", *(tab + 2));
	
	printf("\n---------------------------\n");
	

	return(0);
}
