/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:09:56 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/06 10:43:28 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_trimmable(char c, char const *set)
{
	if (!*set)
		return (0);
	if (c == *set)
		return (1);
	return (is_trimmable(c, set + 1));
}

char	*ft_strtrim(const char *s, char const *set)
{
	int		start;
	int		end;
	char	*out;
	int		i;

	if (!s)
		return (NULL);
	start = 0;
	while (is_trimmable(s[start], set))
		start++;
	end = ft_strlen(s) - 1;
	if (!*s || start == end + 1)
		return ("");
	while (is_trimmable(s[end], set) && end > 0)
		end--;
	out = (char *)malloc((end - start + 2) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
