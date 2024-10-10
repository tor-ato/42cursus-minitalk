/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:49:14 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:59:14 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		s_len;

	s_len = ft_strlen(s);
	str = malloc(sizeof(char) * s_len + 1);
	if (!str)
		return (NULL);
	if (!(ft_memcpy(str, s, s_len)))
		return (NULL);
	*(str + s_len) = 0;
	return (str);
}
