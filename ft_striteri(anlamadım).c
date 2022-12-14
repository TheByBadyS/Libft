/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri(anlamadım).c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:38:21 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/23 17:41:08 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	if (!s || !f)
		return ;
	while (s[x])
	{
		(*f)(x, &s[x]);
		x++;
	}
}
