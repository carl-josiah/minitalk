/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:20:49 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/22 11:09:53 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "talk.h"

void	handler(int signum)
{
	printf("i won't quit sir\n");
}

int	main(void)
{
	signal(SIGINT, handler);
	while(1)
	{
		printf("hello\n");
		sleep(1);
	}
}