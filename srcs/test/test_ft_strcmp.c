/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:55:43 by user42            #+#    #+#             */
/*   Updated: 2021/04/04 18:25:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "libasmtest.h"

void	test_ft_strcmp(void)
{
	int i;

	printf(" == FT_STRCMP == \n");
	i = ft_strcmp("caio", "caio");
	printf("ft_strcmp('caio', 'caio'): %d\n", i);
	i = strcmp("caio", "caio");
	printf("   strcmp('caio', 'caio'): %d\n", i);
}
