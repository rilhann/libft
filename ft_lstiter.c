/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:06:24 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 11:46:43 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while ((lst) != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	f(void *a)
{
	free(a);
}

int	main()
{
	t_list	*lst;
	t_list	*lst1;

	lst = malloc(sizeof(t_list));
	lst1 = malloc(sizeof(t_list));
	lst->next = lst1;
	lst1->next = NULL;
	lst->content = ft_strdup("lst");
	lst1->content = ft_strdup("lst1");
	ft_lstiter(lst, f);
	while ((lst) != NULL)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}*/
