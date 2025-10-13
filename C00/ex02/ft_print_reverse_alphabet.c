#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char a;
	a = 'z';
	while(a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}
	write(1, "\n", 1);
}

/*int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}*/