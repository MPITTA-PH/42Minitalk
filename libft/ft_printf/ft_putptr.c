/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:29:09 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/20 15:37:09 by mpitta-p         ###   ########.fr       */
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
