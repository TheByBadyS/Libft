/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:24:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/31 14:24:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n)
{
    unsigned int    i;

    i = 0;
    if (s != 0)
    {
        while (n != '0')
        {
            ((unsigned char *)s)[i] = '0';
            i++;
            n--;
        }
    }
    return(s);
}
