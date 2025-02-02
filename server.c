/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:20:49 by ccastro           #+#    #+#             */
/*   Updated: 2025/02/02 11:53:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// void	handler(int sig)
// {
// 	static int	bit_position;
// 	static char	current_char;

// 	if (sig == SIGUSR1)
// 		current_char = current_char | (1 << bit_position);
// 	bit_position++;
// 	if (bit_position == 8)
// 	{
// 		if (current_char == '\0')
// 			ft_putchar('\n');
// 		ft_putchar(current_char);
// 		current_char = 0;
// 		bit_position = 0;
// 	}
// 	if (sig == SIGUSR1)
// 		ft_putstr("hi");
// }

void	handler(int sig)
{
	static int	bit_position;
	static char	current_char;

	if (sig == SIGUSR1)
		current_char |= (1 << bit_position);
	bit_position++;
	if (bit_position == 8)
	{
		ft_putchar(current_char);
		bit_position = 0;
		current_char = 0;
	}
}

int	main(void)
{
	ft_putstr("The PID: ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (0);
}
