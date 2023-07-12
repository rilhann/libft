/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:14:01 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 11:37:47 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main()
{
	t_list	**lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*new;
	t_list	*n_new;

	lst = malloc(sizeof(t_list));
	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	n_new = malloc(sizeof(t_list));
	lst1->next = lst2;
	lst2->next = NULL;
	lst = &lst1;
	new->content = "new";
	lst1->content = "lst1";
	lst2->content = "lst2";
	n_new->content = "n_new";
	ft_lstadd_front(lst, new);
	printf("%s\n", lst1->content);
	printf("%s\n", lst1->next->content);
	printf("%s\n", lst1->next->next->content);
	ft_lstadd_front(lst, n_new);
	printf("%s\n", lst1->content);
	printf("%s\n", lst1->next->content);
	printf("%s\n", lst1->next->next->content);
}*/
