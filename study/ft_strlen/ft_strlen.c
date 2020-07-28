#include "stdio.h"
#include "string.h"

extern int ft_strlen(char *s);

int main(void)
{
	int i;

	i = ft_strlen("42");
	printf("MY ASM: %d\n", i);
	i = strlen("42");
	printf("TRUE: %d\n", i);
	return (0);
}
