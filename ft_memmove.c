/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:38:05 by marvin            #+#    #+#             */
/*   Updated: 2022/10/31 14:38:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	count;

	if (dst == 0 && src == 0)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len -1] = ((const char *)src)[len - 1]; // Sanki  aşağıdaki ile yer değiştirmeli gibi!!
			len--;
		}
	}
	else if (src > dst)
	{
		count = 0;
		while (count < len)
		{
			((char *)dst)[count] = ((const char *)src)[count];
			count++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
