#include "libft.h"

// int main(void)
// {
// 	char *input = "hello,world,!";
// 	char sep = ',';
// 	int j, count = 1;
// 	/* count expected tokens (separators + 1) */
// 	for (j = 0; input[j]; j++)
// 		if (input[j] == sep)
// 			count++;
// 	char **res = ft_split(input, sep);
// 	if (!res)
// 	{
// 		fprintf(stderr, "ft_split returned NULL\n");
// 	}
// 	else
// 	{
// 		for (j = 0; j < count; j++)
// 		{
// 			printf("res[%d] = %s\n", j, res[j] ? res[j] : "(null)");
// 			free(res[j]);
// 		}
// 	}
// 	free(res);
// 	return (0);
// }
// ANSI color codes
#define GREEN   "\033[0;32m"
#define RED     "\033[0;31m"
#define YELLOW  "\033[0;33m"
#define CYAN    "\033[0;36m"
#define RESET   "\033[0m"

int main(void)
{
    const char *s1 = "aaz";
    const char *s2 = "aaa";
    size_t len = 3;

    printf(CYAN "🧪 Testing ft_memcmp:\n" RESET);
    printf("   Comparing strings: \"%s\" vs \"%s\" (first %zu bytes)\n\n", s1, s2, len);

    int result_std = memcmp(s1, s2, len);
    int result_ft  = ft_memcmp(s1, s2, len);

    printf("   🔹 Standard memcmp result: %d\n", result_std);
    printf("   🔹 ft_memcmp      result: %d\n\n", result_ft);

    if (result_std == result_ft)
    {
        printf(GREEN "✅ PASS: Both functions behave identically. OK!\n" RESET);
    }
    else
    {
        printf(RED "❌ FAIL: Results differ! Check your ft_memcmp implementation.\n" RESET);
    }

    return 0;
}
