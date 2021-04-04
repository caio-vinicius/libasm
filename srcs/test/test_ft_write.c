/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:55:43 by user42            #+#    #+#             */
/*   Updated: 2021/04/04 18:33:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "libasmtest.h"

void	test_ft_write(void)
{
	int		ret;
	char	*buf;

	buf = malloc(2);
	printf(" == FT_WRITE == \n");
	if ((ret = write(1, "caio", 4)) == -1)
		printf("X | ft_write | %d | %s\n", ret, strerror(errno));
	else
		printf(" | ft_write(1, 'caio', 4)\n");
	if ((ret = ft_write(1, "caio", 4)) == -1)
		printf("X | write | %d | %s\n", ret, strerror(errno));
	else
		printf(" | write(1, 'caio', 4)\n");
}
