/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:39:22 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:26:26 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n--)
		*(tmp_ptr++) = 0;
}
/*
int	main(void) {
	char str[50] = "Hello, world!";
	printf("Antes do ft_bzero: %s\n", str);

	ft_bzero(str, sizeof(str));

	printf("Depois do ft_bzero: %s\n", str);

	return (0);
}*/
