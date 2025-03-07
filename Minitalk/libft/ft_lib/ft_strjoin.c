/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:43:18 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:27:35 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	i;
	size_t	h;

	cat = malloc(sizeof (char) * ((ft_strlen((char *)s1) + ft_strlen((char *)s2)
					) + 1));
	if (!cat)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		cat[i] = s1[i];
		i++;
	}
	h = 0;
	while (s2[h] != 0)
	{
		cat[i] = s2[h];
		h++;
		i++;
	}
	cat[i] = '\0';
	return (cat);
}
