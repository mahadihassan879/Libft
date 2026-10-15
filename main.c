#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("--- Testing ft_isalpha ---\n");
	printf("Is 'A' an alphabet? Expected: 1 | Result: %d\n", ft_isalpha('A'));
	printf("Is 'z' an alphabet? Expected: 1 | Result: %d\n", ft_isalpha('z'));
	printf("Is '5' an alphabet? Expected: 0 | Result: %d\n", ft_isalpha('5'));
	printf("Is '?' an alphabet? Expected: 0 | Result: %d\n", ft_isalpha('?'));

	printf("\n--- Testing ft_isdigit ---\n");
	printf("Is '0' a digit? Expected: 1 | Result: %d\n", ft_isdigit('0'));
	printf("Is '9' a digit? Expected: 1 | Result: %d\n", ft_isdigit('9'));
	printf("Is 'a' a digit? Expected: 0 | Result: %d\n", ft_isdigit('a'));
	printf("Is ' ' a digit? Expected: 0 | Result: %d\n", ft_isdigit(' '));

	return (0);
}