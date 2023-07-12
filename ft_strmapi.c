/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:37:30 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/07 14:09:13 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	if (s == NULL)
		return (0);
	len = ft_strlen(s);
	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	f(unsigned int a, char b)
{
	return (a + b);
}*/

/*int	main()
{
	printf("%s", ft_strmapi("mertflix", f));
}*/
