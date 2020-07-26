#include "stdio.h"

extern int ft_strlen(char *s);

int main(void)
{
	int i;

	i = ft_strlen("42");
	printf("%d\n", i);
	return (0);
}
