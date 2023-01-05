/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew(anlamadım).c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:06:06 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/05 14:57:14 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h"

#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int main(void)
{
	t_list	*new;
	
	new = malloc(sizeof(t_list));
	new = ft_lstnew("Tolga");
	new->next = ft_lstnew("Burak");


	write(1, new->content, strlen(new->content));
	write(1, "\n", 1);
	printf("%s", new->next->content);
	write(1, "\n", 1);
}
