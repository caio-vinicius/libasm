/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:55:43 by user42            #+#    #+#             */
/*   Updated: 2021/04/04 18:25:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "libasmtest.h"

void	test_ft_strlen(void)
{
	int i;

	printf(" == FT_STRLEN == \n");
	i = ft_strlen("caio");
	printf("ft_strlen('caio'): %d\n", i);
	i = strlen("caio");
	printf("   strlen('caio'): %d\n", i);
}
