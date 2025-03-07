/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:17:42 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:27:07 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*pts;
	size_t		i;

	i = 0;
	pts = (const char *)s;
	while (i < n)
	{
		if (pts[i] == (char)c)
			return ((void *)&pts[i]);
		i++;
	}
	return (NULL);
}
