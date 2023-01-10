/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr(yapmaya bak).c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:20:15 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/21 15:20:15 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i > 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (0);
}
