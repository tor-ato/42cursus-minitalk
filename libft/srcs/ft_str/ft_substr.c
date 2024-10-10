/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:10:58 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 22:00:11 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*res;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (!len || start > s_len)
		return (ft_strdup(""));
	if (len > s_len)
		len = s_len;
	if (s_len - start < len)
		res = malloc(sizeof(char) * (s_len - start + 1));
	else
		res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, (len + 1));
	return (res);
}
