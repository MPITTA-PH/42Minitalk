/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:17:42 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:38:57 by mpitta-p         ###   ########.fr       */
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
