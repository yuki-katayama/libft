/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:03:21 by kyuki             #+#    #+#             */
/*   Updated: 2021/06/04 19:06:36 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlstnbr(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr != NULL)
	{
		ft_putnbr_fd((int)ptr->content, 1);
		ptr = ptr->next;
	}
}
