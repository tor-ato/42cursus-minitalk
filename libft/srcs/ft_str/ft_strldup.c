/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:23:26 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:59:37 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strldup(const char *s, int len)
{
	char	*str;

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (!(ft_memcpy(str, s, len)))
		return (NULL);
	*(str + len) = 0;
	return (str);
}
