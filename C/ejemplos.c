#include <stdio.h>
//#include <prototipo.h>

void  video1(void)
{
	printf("hello world\n");
}

void  video2(void)
{
	int a = 20;
	int b = 50;
	printf("a = %d, b = %d \n", a, b);	
}

void  video4(void)
{
	char c = 'k';		
	printf("char: tamaño(en octetos) = %lu, posicion ascii = %d, c = %c\n", sizeof(c), c, c);	
	
	int i;
	printf("int: tamaño(en octetos) = %lu\n", sizeof(i));
	
	long int li;
	printf("long int: tamaño(en octetos) = %lu\n", sizeof(li));
	
	short int si;
	printf("short int: tamaño(en octetos) = %lu\n", sizeof(si));
	
	float f = 12.37;
	printf("float: tamaño(en octetos) = %lu f = %f\n", sizeof(f), f);
	
	double d;
	printf("double: tamaño(en octetos) = %lu\n", sizeof(d));	
}

void  video6(void)
{
	int a[10];
	a[0] = 12;
	a[9] = 1234;
	a[3] = a[0];
	printf("a[0] = %d, a[9] = %d, a[3] = %d \n", a[0], a[9], a[3]);	
}

void  video8(void)
{
	int i;
	i = 44 / 12;
	printf("%d\n", i);	
}

void  video9(void)
{
	int i;
	i = 44 ;
	i++;
	printf("%d\n", i);	
	printf("%d\n", i++);
	printf("%d\n", i);
	printf("%d\n", ++i);
}

void  video11(void)
{
	int a;
	int b;
	a = 43;
	b = 32;
	
	printf("%d == %d %d\n", a, b, a == b);
	printf("%d != %d %d\n", a, b, a != b);
	printf("%d > %d %d\n", a, b, a > b);
	printf("%d < %d %d\n", a, b, a < b);
	printf("%d >= %d %d\n", a, b, a >= b);
	printf("%d <= %d %d\n", a, b, a <= b);
	printf("%d > %d %d\n", a, b, a > b);
	printf("!%d %d\n", a, !a);
	printf("!(%d > %d) %d\n", a, b, !(a > b));
	printf("%d > %d && %d < %d %d\n", a, b, a, b, a > b && a < b);
	printf("%d > %d || %d < %d %d\n", a, b, a, b, a > b || a < b);
}

void  video12(void)
{
	int a;
	a = 42;
	
	if (a > 42)
	{
		printf("Hello\n");
	}
	else if (a < 42)
	{
		printf("Bye\n");
	}
	else {
		printf("por fin\n");
	}		
}

void  video13(void)
{
	int a;
	a = 42;
	
	switch(a)
	{
		case 41: 
			printf("Hello\n");
			break;
		case 48:
			printf("Bye\n");
			break;
		case 42:
			printf("por fin\n");	
			break;
		default:
			printf("default\n");
			break;
	}	
	
}

void  video14(void)
{
	int a;
	int b;
	a = 42;
	
	b = a == 42 ? 12 : 15;
	printf("b = %d\n", b);
	
	a == 43 ? printf("Verdadero\n") : printf("Falso\n");
	
	printf("%d\n", a == 42 ? 12 : 15);

}

void  video15(void)
{
	int tab[10];
	int i;
	
	i = 0;
	while(i < 10)
	{
		tab[i] = i;
		i++;
	}
	
	i = 0;
	
	while(i < 10)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	
}

void  video16(void)
{
	int tab[10];
	int i;
	int j;
	
	i = 10;
	j = 0;
	
	do 	
	{
		tab[j] = i;
		i++;
		j++;
	}while(i < 10);
	
	
	printf("%d\n", tab[0]);
	
}


void  video17(void)
{
	int i;	
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	
	i = 0;
	for (; i < 10; i++)
	{
		printf("%d\n", i);
	}
	
	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", j);
	}
}

void  video18(void)
{	
	for (int j = 0; j < 10; j++)
	{	
		if (j == 5)		
			break;
		printf("%d\n", j);		
	}
	
	printf("\n");
	for (int j = 0; j < 10; j++)
	{		
		if (j == 5)
		{
		        printf("me salto el 5\n");		
			continue;
		}
		printf("%d\n", j);		
	}
}

void  video19(void)
{	
	
bla:
	for (int j = 0; j < 10; j++)
	{		
		if (j == 5)
		{
		        printf("me salto el 5\n");		
			goto bla;
		}
		printf("%d\n", j);		
	}
}


void video21(void);

int video22(void)
{	
	return 5;
}

int video25(int a)
{
	return(a + 5);
}

int main()
{        
	int a;
	a = video25(16);
	printf("%d\n", a);
	return(0);
}


void video21(void)
{
	printf("prototipo de una función\n");
}


