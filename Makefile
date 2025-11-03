CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = $(wildcard *.c)

OBJS = $(SOURCES:.c=.o)

NAME = libft.a

ARCMD = ar -rcs

TARGET = program

all: $(NAME)

$(NAME):$(OBJS)
	$(ARCMD) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I.

$(TARGET): main.c $(NAME)
	$(CC) $(CFLAGS) main.c -o $(TARGET) -L. -lft

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)

fclean: clean
	rm -f $(NAME)

re: fclean all
