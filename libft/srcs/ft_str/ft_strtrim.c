/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:24 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 22:00:04 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	s2 = (char *)s1 + ft_strlen(s1);
	while (s1 < s2 && ft_strchr(set, *s1))
		++s1;
	while (s1 < s2 && ft_strrchr(set, *s2))
		--s2;
	if (s1 == s2 && (!*s1 && !*s2))
		return (ft_strldup(s1, s2 - s1));
	return (ft_strldup(s1, s2 - s1 + 1));
}
