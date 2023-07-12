/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:00:56 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 12:11:51 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main()
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst = malloc(sizeof(t_list));
	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst3 = malloc(sizeof(t_list));

	lst->content = "lst";
	lst1->content = "lst1";
	lst2->content = "lst2";
	lst3->content = "lst3";

	lst->next = lst1;
	lst1->next = lst2;
	lst2->next = lst3;

	int	i;

	i = ft_lstsize(lst);
	printf("%d", i);
}*/
