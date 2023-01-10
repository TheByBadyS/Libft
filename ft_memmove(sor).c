/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:46:36 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/10 16:46:36 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	a;
	//int	i;

	//i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len -1] = ((const char *)src)[len -1];
			len--;
			//i++;
		}
	}
	else if (src > dst)
	{
		a = 0;
		while (a < len)
		{
			((char *)dst)[a] = ((const char *)src)[a];
			a++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

int	main() // sanırım takılıyor analmadım !!!
{
	char str[6] = "hello";
	char	str1[4] = "zab";
	char	*str2 = (char *)ft_memmove(str, str1, 4);
	//char	*s = (char *)ft_memmove(str1, str, 2);
	printf("%s\n", str2);
	//printf("%s\n", s);
}
