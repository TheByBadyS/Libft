/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd(anlamadım).c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:42:17 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/05 14:46:02 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd) // fd neyi göstericek tek problem bu !!!
{
	write(fd, &c, 1);
	0: STANDART INPUT
	1: STANDART OUTPUT
	2: STANDART ERROR

	FD = Dosya açma işlemlerinde fd 3'den başlar ve devam eder, sistemin izin verdiği dosya miktarı kadar
	fd open ile açılıp alabililr int değerdir.
}
