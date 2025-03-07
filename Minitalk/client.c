/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:17:20 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 20:43:23 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	to_binary(int pid, char letter)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((letter & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(150);
		bit++;
	}
}

void	message_handler(int pid, char *message)
{
	int	i;

	i = 0;
	while (message[i])
	{
		to_binary(pid, message[i]);
		i++;
		usleep(150);
	}
	to_binary(pid, '\0');
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("You need to put [PID] [MESSAGE] \
			for the function to work properly");
		return (1);
	}
	message_handler(ft_atoi(av[1]), av[2]);
	return (0);
}
