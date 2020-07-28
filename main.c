#include "libasm.h"

#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char *str;

	char *buf;
	int fd;
	buf = malloc(2);
	fd = open("teste.txt", O_RDONLY);

	i = ft_strlen("caio");
	printf("ft_strlen('caio'): %d\n", i);
	str = ft_strcpy(str, "caio");
	printf("ft_strcpy(str, 'caio'): %s\n", str);
	i = ft_strcmp("caio", "caio");
	printf("ft_strcmp('caio', 'caio'): %d\n", i);
	ft_write(1, "caio", 4);
	printf(" | ft_write(1, 'caio', 4)\n");
	ft_read(fd, buf, 2);
	printf("%s | ft_read(fd, buf, 2)\n", buf);
	str = ft_strdup("caio");
	printf("ft_strdup('caio'): %s\n", str);

	return (0);
}
