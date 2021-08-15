/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigitstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:09:25 by kyuki             #+#    #+#             */
/*   Updated: 2021/08/15 20:12:33 by kyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isdigitstr(char *str)
{
	size_t	index;
	bool	has_digit;

	index = 0;
	has_digit = false;
	str = ft_spaceskip(str);
	if (str[index] == '+' || str[index] == '-')
		str++;
	while (str)
	{
		if (ft_isdigit((int)*str))
			has_digit = true;
		else
			break ;
		str++;
	}
	str = ft_spaceskip(str);
	if (*str == '\0' && has_digit == true)
		return (true);
	else
		return (false);
}
