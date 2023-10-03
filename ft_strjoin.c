/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:36:44 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 19:22:57 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	size;
	char	*out;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	out = (char *)malloc((size + 1) * sizeof(char));
	if (!out)
		return (0);
	size = 0;
	while (*s1)
		out[size++] = *s1++;
	while (*s2)
		out[size++] = *s2++;
	out[size] = 0;
	return (out);
}
