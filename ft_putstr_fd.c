#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

// int main(void)
// {
// 	ft_putstr_fd("hello",1);
// }
