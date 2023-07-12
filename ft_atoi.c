/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruilhan <ruilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:24:17 by ruilhan          #+#    #+#             */
/*   Updated: 2022/06/06 18:19:58 by ruilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				isrt;
	long int		temp;

	i = 0;
	isrt = 1;
	temp = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isrt *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = ((temp * 10) + (str[i] - '0'));
		i++;
		if (temp * isrt > 2147483647)
			return (-1);
		if (temp * isrt < -2147483648)
			return (0);
	}
	return (temp * isrt);
}
