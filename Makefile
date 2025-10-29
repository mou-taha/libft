CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = $(wildcard ./*.c)

OBJS := $(SOURCES:.c=.o)

NAME = libft.a

ARCMD = ar -rcs

all: $(NAME)

$(NAME):$(OBJS)
	$(ARCMD) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I.

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
