#include "libft.h"


void print_result(char **res) {
    if (res == NULL) {
        printf("Error: Memory allocation failed.\n");
        return;
    }

    int i = 0;
    while (res[i]) {
        printf("Substring %d: \"%s\"\n", i, res[i]);
        free(res[i]);  // Free each individual substring
        i++;
    }
    free(res);  // Free the array of pointers
}

int main() {

    // Edge Case 1: Empty String
    printf("Test 1: Empty String\n");
    char **result = ft_split("", ',');
    print_result(result);
    printf("\n");

    // Edge Case 2: No Occurrences of Delimiter
    printf("Test 2: No Occurrences of Delimiter\n");
    result = ft_split("HelloWorld", ',');
    print_result(result);
    printf("\n");

    // Edge Case 3: Single Character String
    printf("Test 3: Single Character String\n");
    result = ft_split("A", ',');
    print_result(result);
    printf("\n");

    // Edge Case 4: Delimiter at the Start of the String
    printf("Test 4: Delimiter at the Start of the String\n");
    result = ft_split(",HelloWorld", ',');
    print_result(result);
    printf("\n");

    // Edge Case 5: Delimiter at the End of the String
    printf("Test 5: Delimiter at the End of the String\n");
    result = ft_split("HelloWorld,", ',');
    print_result(result);
    printf("\n");

    // Edge Case 6: Multiple Consecutive Delimiters
    printf("Test 6: Multiple Consecutive Delimiters\n");
    result = ft_split("Hello,,World", ',');
    print_result(result);
    printf("\n");

    // Edge Case 7: String Consists Only of Delimiters
    printf("Test 7: String Consists Only of Delimiters\n");
    result = ft_split(",,,,", ',');
    print_result(result);
    printf("\n");

    // Edge Case 8: String with Mixed Delimiters (Spaces)
    printf("Test 8: String with Mixed Delimiters (Spaces)\n");
    result = ft_split("Hello World! How are you?", ' ');
    print_result(result);
    printf("\n");

    // Edge Case 9: String with Non-Alphanumeric Delimiters (Punctuation)
    printf("Test 9: String with Non-Alphanumeric Delimiters (Punctuation)\n");
    result = ft_split("Hello!World!How", '!');
    print_result(result);
    printf("\n");

    // Edge Case 10: String with Very Long Words
    printf("Test 10: String with Very Long Words\n");
    result = ft_split("aLongWordHereWithoutAnySpaces", ' ');
    print_result(result);
    printf("\n");
    // Edge Case 11: String with Very Long Words
    printf("Test 10: String with Very Long Words\n");
    result = ft_split(NULL, ' ');
    print_result(result);
    printf("\n");
    return 0;
}

// ANSI color codes
// #define GREEN   "\033[0;32m"
// #define RED     "\033[0;31m"
// #define YELLOW  "\033[0;33m"
// #define CYAN    "\033[0;36m"
// #define RESET   "\033[0m"

// int main(void)
// {
//     const char *s1 = "aaz";
//     const char *s2 = "aaa";
//     size_t len = 3;

//     printf(CYAN "🧪 Testing ft_memcmp:\n" RESET);
//     printf("   Comparing strings: \"%s\" vs \"%s\" (first %zu bytes)\n\n", s1, s2, len);

//     int result_std = memcmp(s1, s2, len);
//     int result_ft  = ft_memcmp(s1, s2, len);

//     printf("   🔹 Standard memcmp result: %d\n", result_std);
//     printf("   🔹 ft_memcmp      result: %d\n\n", result_ft);

//     if (result_std == result_ft)
//     {
//         printf(GREEN "✅ PASS: Both functions behave identically. OK!\n" RESET);
//     }
//     else
//     {
//         printf(RED "❌ FAIL: Results differ! Check your ft_memcmp implementation.\n" RESET);
//     }

//     return 0;
// }


// int main(void)
// {
//     int i;
//     unsigned char *ptr = (unsigned char *)&i;

//     memset(ptr, 0, 4);
//     memset(ptr,   0b00111001, 1);
//     memset(ptr+1, 0b00000101, 1);
//     printf("%d\n", i);

//     for (size_t i = 0; i < sizeof(int); i++) {
//         printf("Byte %ld: 0x%02X\n", i, ptr[i]);
//     }
//     return 0;
// }

// int main(void) {
//     char data[20] = "ABCDEFGHIJ";

//     printf("Before: %s\n", data);
//     ft_memmove(data+2, data, sizeof(data));   //  overlap
//     printf("After memcpy: %s\n", data);

//     return 0;
// }
