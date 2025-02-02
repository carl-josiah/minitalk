/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:45:54 by ccastro           #+#    #+#             */
/*   Updated: 2025/02/02 12:02:48 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_message(int pid, char *message)
{
	int	i;
	int	bit_position;

	i = 0;
	while (message[i])
	{
		bit_position = 0;
		while (bit_position < 8)
		{
			if (((message[i] >> bit_position) & 1) == 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(200);
			bit_position++;
		}
		i++;
	}
	bit_position = 0;
	while (bit_position < 8)
	{
		kill(pid, SIGUSR2);
		usleep(200);
		bit_position++;
	}
}

int	main(int ac, char *av[])
{
	int		pid;
	char	*message;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		message = av[2];
		if (kill(pid, 0) == -1)
		{
			ft_putstr("Invalid PID\n");
			exit(1);
		}
		send_message(pid, message);
	}
	else
	{
		ft_putstr("Usage: ./client <server_pid> <message>\n");
		exit(1);
	}
	return (0);
}
