/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:02:05 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/08 11:23:48 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	int		j;
	size_t	s1_len;
	char	*str;

	if (s1 != NULL)
	{
		s1_len = ft_strlen(s1);
		i = 0;
		j = 0;
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while (s1_len > i && ft_strchr(set, s1[s1_len - 1]))
			s1_len--;
		str = (char *)malloc(sizeof(char) * (s1_len - i + 1));
		if (!str)
			return (NULL);
		while (i < s1_len)
			str[j++] = s1[i++];
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}

/*int	main()
{
	printf("%s\n", ft_strtrim("mert trem", "me"));
}*/