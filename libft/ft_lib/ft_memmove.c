/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:00:02 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:41:59 by mpitta-p         ###   ########.fr       */
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
