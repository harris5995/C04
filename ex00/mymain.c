#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char	a[] = "Hello World";
	int	result = ft_strlen(a);
	printf("%d\n", result);
	return (0);
}
