/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:41:49 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/21 11:41:49 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_mem(void *dst, const void *src, size_t n)
{
    unsigned int    i;

    i = 0;
    if (dst != 0 && src != 0)
    {
        while (n != '0')
        {
            (char *)dst[i] = (const char *)src[i];
            i++;
            n--;
        }
    }
    else if (dst == 0 && src == 0)
        return (NULL);
    return (dst);
}
