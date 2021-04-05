/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 03:09:52 by kyuki             #+#    #+#             */
/*   Updated: 2021/04/04 23:47:14 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	length_1;
	size_t	j;

	length_1 = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		s1[length_1 + j] = s2[j];
		j++;
	}
	s1[length_1 + j] = '\0';
	return (s1);
}
