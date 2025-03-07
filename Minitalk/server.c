/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:25:10 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 20:48:05 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*g_message;

char	*dif_strjoin(char *s1, char *s2)
{
	char		*res;
	size_t		i;
	size_t		j;

	i = -1;
	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (s1[++i] != '\0')
		res[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		res[i++] = s2[j++];
	res[i++] = '\0';
	free(s1);
	return (res);
}

void	signal_handler(int signum)
{
	static int	bit = 0, i = 0;
	char		*letter;

	if (signum == SIGINT)
		return (free(g_message), exit(0));
	if (signum == SIGUSR1)
		i |= (1 << bit);
	if (++bit < 8)
		return ;
	letter = (char *)malloc(2);
	if (!letter)
		return ;
	letter[0] = i;
	letter[1] = 0;
	g_message = dif_strjoin(g_message, letter);
	if (!i)
	{
		ft_putstr_fd(g_message, 1);
		free(g_message);
		g_message = NULL;
	}
	free(letter);
	bit = 0;
	i = 0;
}

int	main(void)
{
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_handler = &signal_handler;
	sa.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	sigaction(SIGINT, &sa, NULL);
	ft_printf("█   █  █████  █      ████   ███   █   █  █████\n");
	ft_printf("█   █  █      █     █      █   █  ██ ██  █\n");
	ft_printf("█ █ █  ████   █     █      █   █  █ █ █  ████\n");
	ft_printf("██ ██  █      █     █      █   █  █   █  █\n");
	ft_printf("█   █  █████  █████  ████   ███   █   █  █████\n");
	ft_printf("\n");
	ft_printf("\t      to Miguel's server\n");
	ft_printf("\t\t Server's PID:\n");
	ft_printf("\t\t     %d\n", getpid());
	while (1)
	{
		pause();
	}
}
