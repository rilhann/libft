/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:00:13 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/07 17:20:04 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n_dst;
	size_t	n_src;

	n_dst = ft_strlen(dst);
	n_src = ft_strlen(src);
	if (n_dst >= dstsize)
		return (dstsize + n_src);
	i = 0;
	while (src[i] && (n_dst + i + 1 < dstsize))
	{
		dst[n_dst + i] = src[i];
		i++;
	}
	dst[n_dst + i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int	main()
{
	printf("%lu\n", strlcat("mert", "hakan", 3));
	printf("%lu", ft_strlcat("mert", "hakan", 3));
}*/