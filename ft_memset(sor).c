/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:49:26 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/10 12:49:26 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h"
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    if (b != 0)
    {
        while (len != 0)
        {
            ((unsigned char *)b)[i] = c; // unsigned'i sil sadece char ile dene hata var mı ve ikinci parantezsiz dene.
            i++;
            len--;
        }
    }
    return(b);
}

int main()
{
    char    str[7] = "hello";
    char    *str1 = (char *)ft_memset(str, '\0', 1);
    printf("%s", str1);
 //   char    a[7] = "Hello";
 //   char *str = (char *)ft_memset(a, 's', 3);
 //   printf("%s\n", str);
}
