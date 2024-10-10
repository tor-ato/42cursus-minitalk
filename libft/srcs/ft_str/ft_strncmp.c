/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:39:46 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:59:52 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((!s1 || !s2) && n == 0)
		return (0);
	while ((*s1 || *s2) && n-- != 0)
	{
		if (!(*s1++ == *s2++))
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	}
	return (0);
}
