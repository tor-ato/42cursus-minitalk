/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:46:20 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:57:51 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*return_add;

	return_add = str;
	while (n--)
		*(char *)str++ = (char)c;
	return (return_add);
}
