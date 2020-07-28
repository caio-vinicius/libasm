#include "stdio.h"
#include "unistd.h"
#include "fcntl.h"
#include "stdlib.h"

extern int ft_read(int fd, void *buf, size_t count);

int	main(void)
{
	int fd;
	char *buf;
	int i;

	i = 0;

	buf = malloc((2 + 1) * sizeof(char));
	fd = open("teste.txt", O_RDONLY);
	i = read(fd, buf, 2);
	printf("%s | %d\n", buf, i);
	close(fd);
	fd = open("teste.txt", O_RDONLY);
	i = ft_read(fd, buf, 2);
	printf("%s | %d\n", buf, i);
	close(fd);
	free(buf);
}
