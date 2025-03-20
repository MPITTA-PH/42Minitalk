/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:06:14 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:37:12 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrunsig(unsigned int nbr);

static void	print(unsigned int nbr)
{
	if (nbr > 9)
		ft_putnbrunsig(nbr / 10);
	if (nbr < 10)
	{
		ft_putchar_fd((int)(nbr + '0'), 1);
		return ;
	}
	ft_putchar_fd((int)(nbr % 10) + '0', 1);
}

int	ft_putnbrunsig(unsigned int nbr)
{
	unsigned int	i;

	print(nbr);
	i = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
