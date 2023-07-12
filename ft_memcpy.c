/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:17:47 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/07 14:29:57 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	b = (char *)dst;
	a = (char *)src;
	i = 0;
	if (b == NULL && a == NULL)
		return (NULL);
	while (i < (int)n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}

/*int main(void)
{
    char    *b = "eyüp";
    char    *a = "mertflix";
    
    b = malloc(sizeof(char));
    ft_memcpy(b, a, 2);
    printf("%s\n", b);
    memcpy(b, a, 2);
    printf("%s\n", b);
}*/