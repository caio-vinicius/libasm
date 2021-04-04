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
	char array1[20];
	char array2[20];

	array1 = "1 2 3 4";
	array2 = "a b c d";
	str = malloc(4 + 1);
	printf(" == FT_STRCPY == \n");
	printf("BEFORE1: %p\n", str);
	str = strcpy(str, "caio");
	printf("   strcpy(str, 'caio'): %s | %p\n", str, str);
	str = malloc(4 + 1);
	printf("BEFORE2: %p\n", str);
	str = ft_strcpy(str, "caio");
	printf("ft_strcpy(str, 'caio'): %s | %p\n", str, str);
	printf(" == FT_STRCPY 2 == \n");
	printf("BEFORE2: %p\n", array1);
	str = ft_strcpy(array1, array2);
	printf("ft_strcpy(array1, array2): %s | %p\n", str, str);
	printf("BEFORE1: %p\n", array1);
	str = strcpy(array1, array2);
	printf("   strcpy(array1, array2): %s | %p\n", str, str);
}
