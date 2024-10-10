/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:48:54 by tkitahar          #+#    #+#             */
/*   Updated: 2024/07/09 21:58:54 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size && (count > SIZE_MAX / size))
		return (NULL);
	ret = malloc(count * size);
	if (ret)
		ft_bzero(ret, count * size);
	return (ret);
}
