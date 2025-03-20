/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:56:19 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:42:36 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sizedest)
{
	size_t	sizesrc;
	size_t	i;

	sizesrc = ft_strlen(src);
	i = 0;
	if (sizedest)
	{
		while (src[i] != 0 && i < (sizedest - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (sizesrc);
}
/*
int	main(void) {
	char dest[20];
	const char *src = "Hello, world!";

	// Copia a string "Hello, world!" para dest usando ft_strlcpy
	size_t len = ft_strlcpy(dest, src, sizeof(dest));

	printf("String copiada: %s\n", dest);
	printf("Comprimento da string copiada: %zu\n", len);

	return (0);
}*/