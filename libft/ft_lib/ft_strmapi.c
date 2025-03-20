/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:49:54 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:42:41 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*check;
	size_t	i;

	check = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!s || !check)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		check[i] = (*f)(i, s[i]);
		i++;
	}
	check[i] = '\0';
	return (check);
}
