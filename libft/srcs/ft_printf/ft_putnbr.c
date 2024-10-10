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

int	ft_putnbr(long nbr, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		len = ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < base_len)
		len += ft_putchar(base[nbr]);
	else
	{
		len += ft_putnbr(nbr / base_len, base);
		len += ft_putnbr(nbr % base_len, base);
	}
	return (len);
}
