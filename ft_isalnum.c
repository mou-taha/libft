/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_isalnum(int c)
{
    if((c>=48 && c<=57) || (c>=65 && c<=90) || (c>=97 && c<=122))
        return (1);
    return (0);
}

// void test_isalnum(char c, bool expected_result) {
//     int result = ft_isalnum(c);
//     printf("Testing '%c' (ASCII %d): isalnum() returned %d. Expected: %s. %s\n",
//            c, (int)c, result, expected_result ? "Non-zero" : "Zero",
//            ((result != 0) == expected_result) ? "PASS" : "FAIL");
// }

// int main() {
//     // Positive Test Cases
//     test_isalnum('A', true);
//     test_isalnum('Z', true);
//     test_isalnum('m', true);
//     test_isalnum('a', true);
//     test_isalnum('0', true);
//     test_isalnum('9', true);

//     // Negative Test Cases
//     test_isalnum('!', false);
//     test_isalnum(' ', false);
//     test_isalnum('\t', false);
//     test_isalnum('\n', false);
//     test_isalnum('.', false);
//     test_isalnum('\0', false); // Null terminator

//     // Edge Case
//     printf("Testing EOF: isalnum() returned %d. Expected: Zero. %s\n",
//            isalnum(EOF), (isalnum(EOF) == 0) ? "PASS" : "FAIL");

//     return 0;
// }
