/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:27:59 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 13:05:07 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	while (*lst)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
}
/*
void	del(void *a)
{
	free(a);
}

int	main()
{
	t_list	**lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst = malloc(sizeof(t_list *));
	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst3 = malloc(sizeof(t_list));
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;
	lst = &lst1;
	lst1->content = ft_strdup("lst1");
	lst2->content = ft_strdup("lst2");
	lst3->content = ft_strdup("lst3");
	ft_lstclear(lst, del);
	printf("%s\n",(*lst)->content);
}*/
