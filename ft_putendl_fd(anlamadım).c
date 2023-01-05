/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd(anlamadım).c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:46:37 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/03 17:19:19 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl_fd(char *s, int fd) // Neden fd var? !!!
{
	write(fd, s, ft_strlen(s)); // stlen niye var? !!!
	ft_putchar_fd('\n', fd); // yeni satır eklemek için ama neden fd var? !!!
}
