
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
int main(void)
{
    char testString1[] = "HelloWorld";
    char testString2[] = "12345";
    char testString3[] = "Hello123";
    char testString4[] = "";

    write(1, "Test 1: Is 'HelloWorld' alphabetic? ", 37);
    ft_str_is_alpha(testString1) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 2: Is '12345' alphabetic? ", 30);
    ft_str_is_alpha(testString2) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 3: Is 'Hello123' alphabetic? ", 34);
    ft_str_is_alpha(testString3) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    write(1, "Test 4: Is '' alphabetic? ", 25);
    ft_str_is_alpha(testString4) ? write(1, "1\n", 2) : write(1, "0\n", 2);

    return 0;
}