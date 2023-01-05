/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup(yapmaya bak).c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:09:37 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/22 16:09:37 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *) malloc(ft_strlen(s1) + 1);
	if (!dst)
		return (0);
	ft_memcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
int main(void)
{
	char	*str;

	str = "Merhaba dünya!";
	printf(ft_strdup(str));
}
