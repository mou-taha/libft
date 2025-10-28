CC = cc
CFLAGS =

SRCS = $(wildcard *.c)

OBJS := $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)


$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
