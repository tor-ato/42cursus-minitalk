/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:18 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:59:21 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, s1_len + 1);
	ft_strlcat(res, s2, (s1_len + s2_len) + 1);
	return (res);
}
