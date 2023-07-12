/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:03:28 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 11:47:46 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main()
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst = malloc(sizeof(t_list));
	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst3 = malloc(sizeof(t_list));

	lst->next = lst1;
	lst1->next = lst2;
	lst2->next = lst3;

	lst->content = "lst";
	lst1->content = "lst1";
	lst2->content = "lst2";
	lst3->content = "lst3";

	printf("%s\n",lst->content);
	lst = ft_lstlast(lst);
	printf("%s",lst->content);
}*/