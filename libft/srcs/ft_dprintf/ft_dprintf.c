/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:38:34 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/24 14:24:11 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	hundle_dformat(int fd, va_list ap, char spe)
{
	if (spe == '%')
		ft_putchar_fd('%', fd);
	if (spe == 'c')
		ft_putchar_fd(va_arg(ap, int), fd);
	else if (spe == 's')
		ft_putstr(va_arg(ap, char *));
	else if (spe == 'p')
		ft_putaddress(va_arg(ap, uintptr_t), "0123456789abcdef");
	else if (spe == 'd' || spe == 'i')
		ft_dputnbr(fd, va_arg(ap, int), "0123456789");
	else if (spe == 'u')
		ft_dputnbr(fd, va_arg(ap, unsigned int), "0123456789");
	else if (spe == 'x')
		ft_dputnbr(fd, va_arg(ap, unsigned int), "0123456789abcdef");
	else if (spe == 'X')
		ft_dputnbr(fd, va_arg(ap, unsigned int), "0123456789ABCDEF");
	return ;
}

void	ft_dprintf(int fd, const char *str, ...)
{
	va_list	ap;

	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
			ft_putchar_fd(*str, fd);
		else if (*str == '%' && *(str + 1))
			hundle_dformat(fd, ap, *(++str));
		str++;
	}
	va_end(ap);
	return ;
}
