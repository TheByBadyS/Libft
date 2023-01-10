/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:14:09 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/10 13:14:09 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t n)
/*{
    unsigned int    i;

    i = 0;
    if (s != 0)
    {
        while (n != '0')
        {
            ((unsigned char *)s)[i] = '\0';
            i++;
            n--;
        }
    }
}*/

{
    ft_memset(s, '\0', n);
}

int main()
{
    char    str[7] = "hello";
    char    *str1 = *(char *)ft_bzero(str, 50);
    printf("%s", str1);
}
