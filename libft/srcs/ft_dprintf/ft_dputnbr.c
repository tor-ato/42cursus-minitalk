/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:51:02 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/22 18:17:18 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_dputnbr(int fd, long nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_dputchar(fd, '-');
		nbr = -nbr;
	}
	if (nbr < base_len)
		ft_dputchar(fd, base[nbr]);
	else
	{
		ft_dputnbr(fd, nbr / base_len, base);
		ft_dputnbr(fd, nbr % base_len, base);
	}
	return ;
}
