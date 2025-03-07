/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:22:34 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:27:53 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	size;

	i = 0;
	size = (size_t)ft_strlen(s);
	if (len > size)
		len = size;
	if (size <= start || size == 0)
		len = 0;
	if (len > size - start)
		len = size - start;
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
