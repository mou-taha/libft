#include "libft.h"
#include <ctype.h>

void	ft_striterii(char *s, void (*f)(unsigned int,char*))
{
	int		i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <ctype.h>

// void toggle_case(unsigned int i, char *c)
// {
//     if (i % 2 == 0)
//         *c = toupper(*c);
//     else
//         *c = tolower(*c);
// }

// int main(void)
// {
//     char str[] = "Hello, World!";

//     printf("Before: %s\n", str);
//     ft_striterii(str, toggle_case);
//     printf("After:  %s\n", str);

//     return 0;
// }

