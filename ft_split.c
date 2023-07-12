/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:44:48 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/10 12:54:43 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_cut(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (j);
}

static char	*news_copy(char *newstr, const char *s, int index, int len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		newstr[i] = s[index - len];
		len--;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

static void	*news_split(char **newstr, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < count)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		while (s[j] != '\0' && s[j] != c)
		{
			j++;
			len++;
		}
		newstr[i] = (char *)malloc(sizeof(char) * len + 1);
		if (!newstr[i])
			return (NULL);
		news_copy(newstr[i], s, j, len);
		i++;
		len = 0;
	}
	newstr[i] = NULL;
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	int		s_say;
	char	**newstr;

	if (s != NULL)
	{
		s_say = s_cut(s, c);
		newstr = (char **)malloc(sizeof(char *) * (s_say + 1));
		if (!newstr)
			return (NULL);
		newstr = news_split(newstr, s, c, s_say);
		return (newstr);
	}
	return (0);
}

/*static int	sutun_bul(char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			len++;
		i++;
	}
	return (len + 1);
}

static int	satir_bul(char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (len);
		i++;
		len++;
	}
	return (len);
}

static char	**word_split(char **split, char *s, char c)
{
	int	i;
	int	x;
	int	y;
	int	len;

	i = 0;
	x = 0;
	while (s[i])
	{
		y = 0;
		if (s[i] != c)
		{
			len = satir_bul(&s[i], c);
			split[x] = malloc(sizeof(char) * len + 1);
			if (!split[x])
				return (0);
			while (s[i] != c && s[i])
				split[x][y++] = s[i++];
			split[x++][y] = '\0';
		}
		else
			i++;
	}
	split[x] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		sutun;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	sutun = sutun_bul((char *)s, c);
	split = (char **)malloc(sizeof(char *) * sutun + 1);
	if (!split)
		return (0);
	split = word_split(split, (char *)s, c);
	return (split);
}*/

/*int	main()
{
	char	**p;
	int		i;

	i = 0;
	p = ft_split("--1-2--3---4----5-----42", '-');
	while (i < 6)
		printf("%s\n", p[i++]);
}*/