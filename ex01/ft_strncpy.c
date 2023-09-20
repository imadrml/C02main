/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:36:27 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/20 12:46:32 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char source[] = "Hello, World!";
    char destination[20]; // Define a destination buffer

    // Use ft_strncpy to copy at most 10 characters from source to destination
    ft_strncpy(destination, source, 10);

    // Print the result to verify
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}*/
