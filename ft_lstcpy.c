/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:53:21 by kyuki             #+#    #+#             */
/*   Updated: 2021/05/30 11:55:27 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*lst_new;
	t_list	*mem_cpy;
	t_list	*mem;

	if (lst == NULL)
		return (NULL);
	lst_new = ft_lstnew(lst->content);
	mem_cpy = lst_new;
	mem = lst;
	lst = lst->next;
	while (lst != NULL)
	{
		lst_new->next = ft_lstnew(lst->content);
		lst_new = lst_new->next;
		lst = lst->next;
	}
	lst_new = mem_cpy;
	lst = mem;
	return (lst_new);
}
