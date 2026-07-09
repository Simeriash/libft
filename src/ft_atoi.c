/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:20:56 by julauren          #+#    #+#             */
/*   Updated: 2026/07/09 13:19:22 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(char *str, int *nbr)
{
	int		i;
	long	num;
	int		sign;

	if (!str)
		return (1);
	i = 0;
	num = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -sign;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + str[i] - 48;
		if ((num > INT_MAX && sign == 1) || (((num * sign) < INT_MIN)))
			return (1);
		i++;
	}
	*nbr = num;
	return (0);
}
