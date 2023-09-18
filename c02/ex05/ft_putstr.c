#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}	
}

int	main()
{
	char *c = "Hello";
	ft_putstr(c);
}

https://www.onlinegdb.com/

https://github.com/48d31kh413k/1337-Piscine-42/blob/main/C01/ex05/ft_putstr_main.c
