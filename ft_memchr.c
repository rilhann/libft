/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:29:18 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/06 18:18:25 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)s;
	while (i < (int)n)
	{
		if (s2[i] == (char)c)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char	*s1;
	char	*s2;

	s1 = "mertflix";
	s2 = "mertflix";
	s1 = memchr(s1, 'f', 5);
	s2 = ft_memchr(s2, 'f', 5);
	printf("%s\n", s1);
	printf("%s\n", s2);
}*/