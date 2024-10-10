/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:47:22 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:57:42 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;

	if (!dest && !src)
		return (NULL);
	char_dest = (char *)dest;
	char_src = (const char *)src;
	while (n--)
		*char_dest++ = *char_src++;
	return (dest);
}
