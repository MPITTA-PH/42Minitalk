/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:05:39 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:28:19 by miguelhenri      ###   ########.fr       */
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
