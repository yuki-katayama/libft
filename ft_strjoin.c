/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 03:10:17 by kyuki             #+#    #+#             */
/*   Updated: 2021/08/29 12:25:44 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(ft_malloc_p((void **)&dest, sizeof(char) \
			* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1)
		dest[i++] = *s1++;
	while (*s2)
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}
