/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd(anlamadım).c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:46:37 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/30 16:35:56 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}
