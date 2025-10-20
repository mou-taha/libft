#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	unsigned int ttl_bytes;
	unsigned char *p;

	ttl_bytes = nmemb * size;
	if (nmemb == 0 || size == 0)
		return NULL;
	res = malloc(ttl_bytes);

	if (res != NULL)
	{
		p = (unsigned char *)res;
		while (ttl_bytes > 0)
		{
			p[ttl_bytes] = '\0';
			ttl_bytes--;
		}
	}
	return (res);
}


int main() {
    int *arr = ft_calloc(5, sizeof(int));
    char *str = ft_calloc(5, sizeof(char));

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]); // prints: 0 0 0 0 0
    printf("\n");

    for (int i = 0; i < 5; i++)
        printf("%d ", str[i]); // prints: 0 0 0 0 0 (null chars)
    printf("\n");

    free(arr);
    free(str);
    return 0;
}
