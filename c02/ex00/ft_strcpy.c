#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Make sure the destination buffer is large enough

    ft_strcpy(destination, source);

    // Print the copied string to verify
    write(1, destination, sizeof(destination) - 1); // -1 to exclude the null terminator
    return 0;
}
