/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:08:04 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/20 13:08:12 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char testString1[] = "HelloWorld";
    char testString2[] = "12345";
    char testString3[] = "Hello123";
    char testString4[] = "";

    write(1, "Test 1: Is 'HelloWorld' alphabetic? ", 37);
    ft_str_is_numeric(testString1) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 2: Is '12345' alphabetic? ", 30);
    ft_str_is_numeric(testString2) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 3: Is 'Hello123' alphabetic? ", 34);
    ft_str_is_numeric(testString3) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 4: Is '' alphabetic? ", 25);
    ft_str_is_numeric(testString4) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    return 0;
}
*/
