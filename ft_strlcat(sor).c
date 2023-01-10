/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat(kafam karıştı).c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:54 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/10 18:05:54 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src)); // bu if neden var analmadım? !!!
	a = ft_strlen(dst);
	b = 0;
	while (src[b] != '\0' && a < dstsize - 1) // a < dstsize - 1 neden var anlamadım? !!!
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}

int	main()
{
	char	str[6] = "hello";
	char	str1[4] = "zoz";
	printf("%zu", ft_strlcat(str, str1, 7));
}
