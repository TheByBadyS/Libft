/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim(anlamadım).c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:02:40 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/03 16:58:05 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1)) // Neden *s1 böyle yazılır ve strchr ders değer verilmemiş mi !!!
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i])) // Aynı sorun !!
		i--;
	return (ft_substr(s1, 0, i + 1));
}
