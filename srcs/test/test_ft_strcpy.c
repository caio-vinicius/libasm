/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:55:43 by user42            #+#    #+#             */
/*   Updated: 2021/04/04 18:25:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "libasmtest.h"

void	test_ft_strcpy(void)
{
	char *str;

	str = malloc(4 + 1);
	printf(" == FT_STRCPY == \n");
	printf("BEFORE1: %p\n", str);
	str = strcpy(str, "caio");
	printf("   strcpy(str, 'caio'): %s | %p\n", str, str);
	str = malloc(4 + 1);
	printf("BEFORE2: %p\n", str);
	str = ft_strcpy(str, "caio");
	printf("ft_strcpy(str, 'caio'): %s | %p\n", str, str);
}
