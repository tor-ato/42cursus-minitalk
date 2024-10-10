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

int	ft_putaddress(uintptr_t nbr, char *base)
{
	int			len;
	uintptr_t	base_len;

	len = ft_putstr("0x");
	base_len = ft_strlen(base);
	if (nbr < base_len)
		len += ft_putchar(base[nbr]);
	else
	{
		len += ft_putnbr(nbr / base_len, base);
		len += ft_putnbr(nbr % base_len, base);
	}
	return (len);
}
