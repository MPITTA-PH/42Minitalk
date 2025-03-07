/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:00:02 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:27:18 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;

	if (!dst && !src)
		return (NULL);
	c_src = (char *)src;
	c_dst = (char *)dst;
	if (c_dst > c_src)
		while (len--)
			c_dst[len] = c_src[len];
	else
	{
		while (len--)
			*c_dst++ = *c_src++;
	}
	return (dst);
}
