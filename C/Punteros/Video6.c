#include <stdio.h>

int main(void)
{
	system("clear");
	printf("--------Video 6--------------\n");
	
	char c;
	char d;
	
	c = '0';
	printf("%d\n", c);
	
	c = 0;
	printf("%d\n", c);
	
	c = '\0';
	printf("%d\n", c);
	
	printf("\n---------------------------\n");
	
	char *str;
	
	str = "lol";
	printf("%s\n", str);
	printf("%c\n", *str);
	printf("%c\n", *(str + 1));
	printf("%c\n", *(str + 2));
	printf("%c\n", *(str + 3));
	
	printf("\n---------------------------\n");
	
	char str2[] = "lol";
	
	str2[0] = 'p';
	printf("%s\n", str2);
	printf("%c\n", *str2);
	printf("%c\n", *(str2 + 1));
	printf("%c\n", *(str2 + 2));
	printf("%c\n", *(str2 + 3));
	
	return(0);
}
