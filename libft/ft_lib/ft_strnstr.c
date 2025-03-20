/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:22:37 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:42:46 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)&str[i]);
	while (str[i] != 0)
	{
		c = 0;
		while (str[i + c] == to_find[c] && (i + c) < len)
		{
			if (str[i + c] == 0 && to_find[c] == 0)
				return ((char *)&str[i]);
			c++;
		}
		if (to_find[c] == 0)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
