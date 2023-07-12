/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:36:01 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 11:43:23 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*void	del(void *a)
{
	free(a);
}

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
	lst->next = lst1;
	lst1->next = lst2;
	lst2->next = lst3;
	lst->content = ft_strdup("lst");
	lst1->content = ft_strdup("lst1");
	lst2->content = ft_strdup("lst2");
	lst3->content = ft_strdup("lst3");
	ft_lstdelone(lst, del);
	while ((lst) != NULL)
	{
		printf("%s\n",lst->content);
		lst = lst->next;
	}
}*/
