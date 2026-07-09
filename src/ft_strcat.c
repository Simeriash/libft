/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 10:22:56 by julauren          #+#    #+#             */
/*   Updated: 2026/07/09 10:29:48 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strcat(char *dest, char *src)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dest);
	if (!src)
		return (len);
	i = 0;
	while (src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (len);
}
