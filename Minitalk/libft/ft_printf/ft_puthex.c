/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:04:01 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:28:15 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long arg, char flag);

static void	printhex(unsigned long arg, char flag)
{
	char	*base;

	if (flag == 'x')
		base = "0123456789abcdef";
	else if (flag == 'X')
		base = "0123456789ABCDEF";
	if (arg > 15)
	{
		ft_puthex(arg / 16, flag);
		ft_puthex(arg % 16, flag);
	}
	else if (arg < 16)
		ft_putchr(base[arg]);
}

int	ft_puthex(unsigned long arg, char flag)
{
	unsigned int	i;

	if (arg == 0)
	{
		ft_putchr('0');
		i = 1;
		return (i);
	}
	printhex(arg, flag);
	i = 0;
	while (arg != 0)
	{
		arg = arg / 16;
		i++;
	}
	return (i);
}
