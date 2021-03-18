/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 03:01:40 by kyuki             #+#    #+#             */
/*   Updated: 2021/03/18 19:37:27 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*chr;

	if (!(chr = malloc(size * count)))
		return (NULL);
	ft_bzero(chr, count * size);
	return (chr);
}
