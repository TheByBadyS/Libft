/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter(anlamadım).c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:28:23 by toaktas           #+#    #+#             */
/*   Updated: 2022/12/06 17:20:06 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
void	fnc(void *v)
{
	char *x;

	x = v;

	*x += 1;
}

int main()
{
	t_list *lst;

	*lst = malloc(sizeof(t_list));
	*lst->content = "tolga";
	*lst->next = NULL;

	ft_lstiter(lst, &fnc);
}
