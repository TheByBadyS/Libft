/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize(anlamadım).c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:16:03 by toaktas           #+#    #+#             */
/*   Updated: 2022/11/24 17:19:22 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	size_t	i;

	temp = lst;
	i = 0;
	if (!lst || !temp)
		return (0);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
