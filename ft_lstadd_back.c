/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:32:16 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 11:35:58 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

/*int	main()
{
	t_list	**lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*new;
	t_list	*n_new;

	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	n_new = malloc(sizeof(t_list));
	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst = &lst1;
	lst1->next = lst2;
	lst1->content = "lst1";
	lst2->content = "lst2";
	new->content = "new_content";
	n_new->content = "n_new_content";
	ft_lstadd_back(lst, new);
	printf("%s\n",lst1->content);
	printf("%s\n", lst1->next->content);
	printf("%s\n",lst1->next->next->content);
	ft_lstadd_back(lst, n_new);
	printf("%s\n",lst1->next->next->next->content);
}*/
