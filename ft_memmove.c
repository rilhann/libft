/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:34:56 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/09 11:14:15 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while ((size_t)i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int main()
{
	char src[] = "abcdefgh";
	char dst[] = "zyvutsrponml";

	printf("%s\n", ft_memmove(dst, src, 5));
	printf("%s", memmove(dst, src, 5));
}*/
