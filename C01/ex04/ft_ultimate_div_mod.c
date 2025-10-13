#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d; 
}
/*int main(void)
{
	int a = 10;
	int b = 3;
	
	ft_ultimate_div_mod(&a, &b);
	printf("le résultat = %d, le reste = %d", a, b);
	return(0);
}*/