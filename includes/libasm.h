/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <csouza-f@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:10:11 by caio              #+#    #+#             */
/*   Updated: 2020/08/03 20:58:03 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>

typedef struct		s_list {
	void			*data;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen	(const char *s);
char				*ft_strcpy	(char *dest, const char *src);
int					ft_strcmp	(const char *s1, const char *s2);
ssize_t				ft_write	(int fd, const void *buf, size_t count);
ssize_t				ft_read		(int fd, void *buf, size_t count);
char				*ft_strdup	(const char *s);

#endif
