/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:41:51 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:59:57 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (*haystack)
	{
		if (len-- < needle_len)
			return (NULL);
		if (!(ft_strncmp(haystack++, needle, needle_len)))
			return ((char *)--haystack);
	}
	return (NULL);
}
