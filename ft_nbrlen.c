/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 15:22:39 by kyuki             #+#    #+#             */
/*   Updated: 2021/08/01 15:49:14 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb < 9)
		return (1);
	return (ft_nbrlen(nb / 10) + 1);
}