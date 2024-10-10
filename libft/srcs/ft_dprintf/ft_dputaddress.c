/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:50:51 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/22 18:16:58 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_dputaddress(int fd, uintptr_t nbr, char *base)
{
	uintptr_t	base_len;

	ft_dputstr(fd, "0x");
	base_len = ft_strlen(base);
	if (nbr < base_len)
		ft_dputchar(fd, base[nbr]);
	else
	{
		ft_dputnbr(fd, nbr / base_len, base);
		ft_dputnbr(fd, nbr % base_len, base);
	}
	return ;
}
