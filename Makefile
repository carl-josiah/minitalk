SRC_SERVER = server.c
SRC_CLIENT = client.c

OBJS_SERVER = $(SRC_SERVER:.c=.o)
OBJS_CLIENT = $(SRC_CLIENT:.c=.o)

FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a

all: server client

server: $(OBJS_SERVER) $(LIBFT)
	cc $(FLAGS) $(OBJS_SERVER) -o server -Llibft -lft

client: $(OBJS_CLIENT) $(LIBFT)
	cc $(FLAGS) $(OBJS_CLIENT) -o client -Llibft -lft

$(LIBFT):
	make -C libft

clean:
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	make -C libft clean

fclean: clean
	rm -f server client libft/libft.a

re: fclean all