/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:57:50 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:37:07 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstri(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		i += ft_putstri("(null)");
	else
	{
		while (str[i])
		{
			ft_putchr(str[i]);
			i++;
		}
	}
	return (i);
}
