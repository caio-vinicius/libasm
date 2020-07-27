#include <stdio.h>
#include <stdlib.h>

extern char	*ft_strcpy(char *dest, const char *src);

char *ft_strcpy2(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char *dest;
	char *src;

	dest = malloc(2 * sizeof(char));

	printf("C: %s\n", ft_strcpy2(dest, "Teste"));
	printf("ASM: %s\n", ft_strcpy(dest, "Teste"));
}
