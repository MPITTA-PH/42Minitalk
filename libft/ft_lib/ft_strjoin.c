/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:43:18 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:42:31 by mpitta-p         ###   ########.fr       */
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
