/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:46:26 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/20 09:46:33 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}*/
/*
int main(void)
{
    char testString1[] = "HelloWorld";
    char testString2[] = "\nllo";
    char testString3[] = "Hello123";
    char testString4[] = "";

    write(1, "Test 1: Is 'HelloWorld' alphabetic? ", 37);
    ft_str_is_printable(testString1) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 2: Is '\nllo' alphabetic? ", 30);
    ft_str_is_printable(testString2) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 3: Is 'Hello123' alphabetic? ", 34);
    ft_str_is_printable(testString3) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 4: Is '' alphabetic? ", 25);
    ft_str_is_printable(testString4) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    return 0;
}*/
