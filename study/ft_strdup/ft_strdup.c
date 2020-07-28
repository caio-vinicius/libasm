#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern char *ft_strdup(const char *s);

char	*ft_strcpy(char *dest, const char *src)
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

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup2(const char *s)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	str = malloc(i + 1);
	str = ft_strcpy(str, s);
	return (str);
}

int main(void)
{
	char *str;

	str = ft_strdup2("Caio");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("Caio");
	printf("%s\n", str);
	free(str);
	return (0);
}
