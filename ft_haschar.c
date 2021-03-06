/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haschar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 03:09:55 by kyuki             #+#    #+#             */
/*   Updated: 2021/08/15 20:08:57 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_haschar(const char *s, int c)
{
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(s) + 1;
	while (i < length)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (0);
		i++;
	}
	return (-1);
}
