/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
return(i);
}

/*int main(void)
{
	char *str = "tongroszincdd";
	int n = ft_strlen(str);
	printf("nombre de carac = %d", n);
	return(0);
}*/