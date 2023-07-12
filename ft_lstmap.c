/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:05:12 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 12:45:51 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*cnt;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		cnt = f(lst->content);
		tmp = ft_lstnew(cnt);
		if (tmp == NULL)
		{
			del(cnt);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}

/*void	*f(void *a)
{
	a = "degistirildi";
	return (a);
}

void	del(void *b)
{
	free(b);
}

int	main()
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;
	t_list	*node;

	lst = malloc(sizeof(t_list));
	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst3 = malloc(sizeof(t_list));
	lst4 = malloc(sizeof(t_list));
	node = malloc(sizeof(t_list));
	lst->next = lst1;
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = NULL;
	lst->content = ft_strdup("lst0");
	lst1->content = ft_strdup("lst1");
	lst2->content = ft_strdup("lst2");
	lst3->content = ft_strdup("lst3");
	lst4->content = ft_strdup("lst4");
	node = lst;
	while (node != NULL)
	{
		printf("%s\n", node->content);
		node = node->next;
	}
	node = ft_lstmap(lst, f, del);
	while (node != NULL)
	{
		printf("%s\n", node->content);
		node = node->next;
	}
}*/
