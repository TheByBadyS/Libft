/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr(anlamadım).c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:37:35 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/03 16:41:51 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s == 0)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup("")); // Buna ihtiyaç yok gibi!!!
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (str == 0)
		return (NULL);
	while (i < len)
		str[i++] = s[start++]; // Değiştirile bilir mi bak!!!
	str[i] = '\0';
	return (str);
}
