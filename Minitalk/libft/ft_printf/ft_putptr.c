/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:29:09 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:28:24 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *arg)
{
	unsigned int	i;

	if (arg == 0)
		return (ft_putstri("(nil)"));
	i = 2;
	ft_putstri("0x");
	i += ft_puthex((unsigned long)arg, 'x');
	return (i);
}
