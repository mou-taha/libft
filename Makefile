CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_substr.c ft_strlcpy.c ft_calloc.c ft_strlcat.c ft_strjoin.c ft_strtrim.c ft_strchr.c ft_split.c ft_itoa.c ft_strmapi.c ft_striterii.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_memcpy.c ft_memmove.c
OBJS = $(SRCS:.c=.o)
NAME = libft

all: $(NAME)

$(NAME):  $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
