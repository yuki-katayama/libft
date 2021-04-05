/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned_int.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:50:18 by kyuki             #+#    #+#             */
/*   Updated: 2021/04/05 15:47:37 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putnbr_base_unsigned_int(unsigned int nb, unsigned int base)
{
	int	len;

	len = 0;
	if (nb > base - 1)
		len = putnbr_base_unsigned_int(nb / base, base);
	write(1, &"0123456789abcdef"[nb % base], 1);
	return (len + 1);
}

int	ft_putnbr_base_unsigned_int(unsigned int nbr, unsigned int size)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, &"-", 1);
		len += 1;
	}
	len += putnbr_base_unsigned_int(nbr, size);
	return (len);
}
