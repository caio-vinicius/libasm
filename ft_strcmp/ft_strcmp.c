#include <string.h>
#include <stdio.h>

extern int ft_strcmp(const char *s1, const char *s2);

int	ft_strcmp2(const char *s1, const char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (!diff && s1[i] && s2[i])
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}

int main(void)
{
	int i;

	i = strcmp("ctio", "caio");
	printf("TRUE: %d\n", i);
	i = ft_strcmp("ctio", "caio");
	printf("MY ASM: %d\n", i);
	i = ft_strcmp2("ctio", "caio");
	printf("C: %d\n", i);
}
