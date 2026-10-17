#include <stdio.h>
#include "libft.h"

int	main(void)
{
	// printf("--- Testing ft_isalpha ---\n");
	// printf("Is 'A' an alphabet? Expected: 1 | Result: %d\n", ft_isalpha('A'));
	// printf("Is 'z' an alphabet? Expected: 1 | Result: %d\n", ft_isalpha('z'));
	// printf("Is '5' an alphabet? Expected: 0 | Result: %d\n", ft_isalpha('5'));
	// printf("Is '?' an alphabet? Expected: 0 | Result: %d\n", ft_isalpha('?'));

	// printf("\n--- Testing ft_isdigit ---\n");
	// printf("Is '0' a digit? Expected: 1 | Result: %d\n", ft_isdigit('0'));
	// printf("Is '9' a digit? Expected: 1 | Result: %d\n", ft_isdigit('9'));
	// printf("Is 'a' a digit? Expected: 0 | Result: %d\n", ft_isdigit('a'));
	// printf("Is ' ' a digit? Expected: 0 | Result: %d\n", ft_isdigit(' '));

// 	printf("--- Testing ft_strlen ---\n");
	
// 	// Test 1: Normal string
// 	printf("Length of 'Hello': Expected: 5 | Result: %zu\n", ft_strlen("Hello"));
	
// 	// Test 2: Empty string
// 	printf("Length of '': Expected: 0 | Result: %zu\n", ft_strlen(""));
	
// 	// Test 3: String with spaces
// 	printf("Length of '42 Abu Dhabi': Expected: 12 | Result: %zu\n", ft_strlen("42 Abu Dhabi"));

// 	return (0);
{
    printf("A: %d\n", ft_isalnum('A'));
    printf("z: %d\n", ft_isalnum('z'));
    printf("5: %d\n", ft_isalnum('5'));
    printf("@: %d\n", ft_isalnum('@'));
    printf("Space: %d\n", ft_isalnum(' '));

    return (0);
}
}