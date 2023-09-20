/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:10:29 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/20 13:10:49 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char testString1[] = "HelloWorld";
    char testString2[] = "hello";
    char testString3[] = "Hello123";
    char testString4[] = "";

    write(1, "Test 1: Is 'HelloWorld' alphabetic? ", 37);
    ft_str_is_lowercase(testString1) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 2: Is 'hello' alphabetic? ", 30);
    ft_str_is_lowercase(testString2) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 3: Is 'Hello123' alphabetic? ", 34);
    ft_str_is_lowercase(testString3) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 4: Is '' alphabetic? ", 25);
    ft_str_is_lowercase(testString4) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    return 0;
}*/
