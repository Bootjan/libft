/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:09:56 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 19:23:15 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(const char *s)
{
	int		start;
	int		end;
	char	*out;
	int		i;

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	end = ft_strlen(s);
	while (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t')
		end--;
	out = (char *)malloc((end - start + 1) * sizeof(char));
	if (!out)
		return (0);
	i = 0;
	while (start + i < end)
		*out++ = s[start + i++];
	*out = 0;
	return (out - (end - start));
}
