/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:05:39 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:37:14 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnb(long nbr)
{
	long	nb;
	int		i;

	i = 1;
	nb = nbr;
	if (nbr < 0 && nbr != -2147483648)
	{
		nb = -nbr;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbr_fd((int)nbr, 1);
	if (nbr == -2147483648)
		return (11);
	return (i);
}
