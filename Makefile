# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/20 09:43:22 by ccastro           #+#    #+#              #
#    Updated: 2025/01/20 10:32:50 by ccastro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server

CLIENT = client

CC = cc

FLAGS = -Wall -Wextra -Werror

all: # fill

clean: # fill


fclean: clean # fill

re: fclean all

.PHONY: all clean fclean re