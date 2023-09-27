#include <stdio.h>
#include <string.h>
int main ()
{
	char str[20];
	int a;
	char sty[strlen(str)];
	
	
	printf("write your full name:\n");
	
	fgets(str, sizeof(str), stdin);
	
	str[0] = 'X';
	
	printf("your full name is %s", str);
	
	printf("\n the length of the string is: %zu\n", strlen(str));
	
	printf("what is your age:\n");
	
	scanf("%d", &a);
	
	printf ("your age is: %d", a);
	
	return 0;
}
