# executables
NAME_SERVER = server
NAME_CLIENT = client

# compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# sources
SRC_SERVER = server.c
SRC_CLIENT = client.c
SRC_UTILS = utils.c

# objects
OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_UTILS  = $(SRC_UTILS:.c=.o)

# rules
all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_SERVER) $(OBJ_UTILS)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(OBJ_UTILS) -o $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT) $(OBJ_UTILS)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(OBJ_UTILS) -o $(NAME_CLIENT)

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_UTILS)

fclean: clean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re
