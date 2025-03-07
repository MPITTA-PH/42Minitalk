/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:57:50 by luamonteiro       #+#    #+#             */
/*   Updated: 2025/02/26 15:28:26 by miguelhenri      ###   ########.fr       */
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
