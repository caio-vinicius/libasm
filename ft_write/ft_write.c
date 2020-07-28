#include "stdio.h"
#include "unistd.h"

extern int ft_write(int fd, const void *buf, size_t count);

int main(void)
{
	int i;

	i = 0;
	i = ft_write(-1, "c", 2);
	printf(" | R MY ASM: %d\n", i);
	i = write(-1, "c", 2);
	printf(" | R TRUE: %d\n", i);
	return (0);
}
