/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr(yapmaya bak).c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:29:01 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/21 15:29:01 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char *)s;
    while (i < n)
    {
        if (((unsigned char *)str)[i] == (unsigned char)c)
            return (&str[i]);
        i++;
    }
    return (0);
}
