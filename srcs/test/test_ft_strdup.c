/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:55:43 by user42            #+#    #+#             */
/*   Updated: 2021/04/04 18:25:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "libasmtest.h"

void	test_ft_strdup(void)
{
	char *str;

	str = malloc(4 + 1);
	printf(" == FT_STRDUP == \n");
	if (!(str = strdup("caio")))
		printf("X | strdup('caio') | errno: %d | |%s|\n",
			errno,
			strerror(errno));
	else
		printf("strdup('caio'): |%s|\n", str);
	if (!(str = ft_strdup("caio")))
		printf("X | ft_strdup('caio') | errno: %d | |%s|\n",
			errno,
			strerror(errno));
	else
		printf("ft_strdup('caio'): |%s|\n", str);
}
