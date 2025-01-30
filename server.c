/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:20:49 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/30 09:29:51 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig)
{
	printf("Can't\n");
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_handler = &handler;
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
		pause();
	return (0);
}