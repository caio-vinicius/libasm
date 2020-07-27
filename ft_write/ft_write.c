#include "stdio.h"
#include "unistd.h"

extern int ft_write(int fd, const void *buf, size_t count);

int main(void)
{
	int i;

	i = 0;
	i = ft_write(1, "caio", 4);
	printf("\n%d\n", i);
	i = write(1, "caio", 4);
	printf("\n%d\n", i);
	return (0);
}
