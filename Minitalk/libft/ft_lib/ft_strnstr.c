/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:22:37 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:27:48 by miguelhenri      ###   ########.fr       */
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
