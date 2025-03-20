/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:55:35 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:42:07 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len--)
		*(tmp_ptr++) = (unsigned char)c;
	return (b);
}
/*
int	main(void) {
	char str[50] = "Hello, world!";
	printf("Antes do ft_memset: %s\n", str);

	ft_memset(str, 'X', 5);

	printf("Depois do ft_memset: %s\n", str);

	return (0);
}*/