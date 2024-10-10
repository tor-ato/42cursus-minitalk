/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:54:05 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:57:47 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	unsigned const char	*char_src;

	if (!dest && !src)
		return (NULL);
	char_dest = dest;
	char_src = src;
	if (dest < src)
	{
		while (n--)
			*char_dest++ = *char_src++;
	}
	else
	{
		char_dest = char_dest + n - 1;
		char_src = char_src + n - 1;
		while (n--)
			*char_dest-- = *char_src--;
	}
	return (dest);
}
