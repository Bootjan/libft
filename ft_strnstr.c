/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:14:00 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 19:23:11 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- > 0)
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (needle[i] == haystack[i])
			{
				if (!needle[i + 1] && i <= len)
					return ((char *)haystack);
				if (!haystack[i + 1])
					return (0);
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
