/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr(yapmaya bak).c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:44:01 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/22 11:44:01 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    i = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (i < len && haystack[i] != '\0')
    {
        if (haystack[i] == needle[i])
            return ((char *)&haystack[i]);
        i++;
    }
    return(0);
}
