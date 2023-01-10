/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:00:48 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/10 20:00:48 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (n > 0)
    {
        if (s1[i] < s2[i])
            return(-1);
        else if (s1[i] > s2[i])
            return(1);
        i++;
        n--;
    }
    return(0);
}
