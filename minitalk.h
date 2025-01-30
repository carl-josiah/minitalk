/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 08:37:40 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/29 17:27:12 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <limits.h>

int		ft_atoi(const char *str);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t	ft_strlen(char *str);

#endif