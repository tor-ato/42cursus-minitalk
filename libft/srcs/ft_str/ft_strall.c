/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:44:09 by tkitahar          #+#    #+#             */
/*   Updated: 2024/10/10 17:45:16 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strall(const char *str, int (*f)(int))
{
	if (str == NULL || f == NULL)
		return (0);
	while (*str)
	{
		if (!f(*str))
			return (0);
		str++;
	}
	return (1);
}
