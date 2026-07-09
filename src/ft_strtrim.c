/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:16:25 by julauren          #+#    #+#             */
/*   Updated: 2026/07/09 10:38:19 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char *str, char *set)
{
	size_t	start;
	size_t	len;
	char	*dest;

	if (!str || !set || set[0] == '\0')
	{
		if (!str)
			dest = NULL;
		if (!set || set[0] == '\0')
			dest = ft_strdup(str);
		return (dest);
	}
	len = ft_strlen(str);
	start = 0;
	while (ft_strchr(set, str[start]) && str[start] != '\0')
		start++;
	len = len - 1;
	while (ft_strrchr(set, str[len]) && len > start)
		len--;
	dest = ft_substr(str, start, len - start + 1);
	return (dest);
}
