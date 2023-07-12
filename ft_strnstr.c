/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:46:46 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/09 11:52:11 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && len > ft_strlen(needle) - 1)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
		len--;
	}
	return (NULL);
}

/*int	main()
{
	int	i;
	char	*b;

	b = "merthakan";
	i = 3;
	printf("%s\n", ft_strnstr("merthaertkan", "", 15));
}*/