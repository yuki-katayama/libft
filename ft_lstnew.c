/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 03:02:42 by kyuki             #+#    #+#             */
/*   Updated: 2021/04/05 12:22:05 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = NULL;
	if (!(ft_malloc_p((void **)&a, sizeof(t_list))))
		return (NULL);
	a->content = (char *)content;
	a->next = NULL;
	return (a);
}
