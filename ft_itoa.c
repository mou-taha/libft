#include <stdio.h>

char* itoa(int value, char* result, int base) {
    // check that the base if valid
    if (base < 2 || base > 36) { *result = '\0'; return result; }

    char* ptr = result, *ptr1 = result, tmp_char;
    int tmp_value;

    do {
        tmp_value = value;
        value /= base;
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
    } while ( value );

    // Apply negative sign
    if (tmp_value < 0) *ptr++ = '-';
    *ptr-- = '\0';

    // Reverse the string
    while(ptr1 < ptr) {
        tmp_char = *ptr;
        *ptr--= *ptr1;
        *ptr1++ = tmp_char;
    }
    return result;
}

char *ft_itoa(int n)
{
	char *res;
	char *result = res;
	char *result1 = res;
    int sign;
    char tmp_char;
    
    if(n < 0)
    {
        n *=-1;
        sign = -1; 
    }
	while (n)
	{
		*result++= '0' + n % 10;
		n = n / 10;
	}
    if(sign == -1)
        *result++= '-';
    *result--= '\0';
      // Reverse the string
	printf("result %s\n",result);
	printf("res %s\n",res);
	printf("result1 %s\n",result1);

    while(result1 < result) {
        tmp_char = *result;
        *result--= *result1;
        *result1++ = tmp_char;
    }
	return res;
}


int main()
{
	char *res;
	printf("res final%s\n",ft_itoa(-518541185));
}
