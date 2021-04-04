/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:55:43 by user42            #+#    #+#             */
/*   Updated: 2021/04/04 18:33:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "libasmtest.h"

void	test_ft_read(void)
{
	int		fd;
	char	*buf;

	buf = malloc(2);
	printf(" == FT_READ == \n");
	fd = open("teste.txt", O_RDONLY);
	if (read(fd, buf, 2) == -1)
		printf("X | ft_read(fd, buf, 2) | %s\n", strerror(errno));
	else
		printf("%s | ft_read(fd, buf, 2)\n", buf);
	close(fd);
	fd = open("teste.txt", O_RDONLY);
	if (ft_read(fd, buf, 2) == -1)
		printf("X | ft_read(fd, buf, 2) | %s\n", strerror(errno));
	else
		printf("%s | ft_read(fd, buf, 2)\n", buf);
	close(fd);
}
