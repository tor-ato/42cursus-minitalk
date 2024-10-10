/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:55:10 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 22:00:29 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (ft_isdigit(*str))
	{
		if (res > LONG_MAX / 10 || (res == LONG_MAX / 10 && (*str
					- '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			else
				return ((int)LONG_MIN);
		}
		res = (10 * res) + (*str++ - '0');
	}
	return (res * sign);
}
