#include <stdio.h>

void fct(int a)
{
	a = a + 42;
}


void fct2(int *a)
{
	*a = *a + 42;
}

int main(void)
{
	//system("clear");
	printf("--------Video 7--------------\n");
	
	int a;
	
	a = 42;
	printf("%d\n", a);
	
	fct(a);
	printf("%d\n", a);
	
	fct2(&a);
	printf("%d\n", a);
	
	printf("--------Video 8--------------\n");
	
	void *ptr;
	int *ptr_i;
	char *ptr_c;
	
	ptr = ptr_c;
	ptr = ptr_i;

	return(0);
}
