/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:15:26 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/09 12:26:54 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s1;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return ((char *)ft_calloc(1, 1));
	j = ft_strlen(s);
	if (j < (int)len)
		len = (size_t)j;
	s1 = (char *)malloc(sizeof(char) * (int)len + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (i < (int)len)
	{
		s1[i] = s[i + start];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*int	main()
{
	printf("%s", ft_substr("mertflix", 2, 5));
}*/