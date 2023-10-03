/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:27:28 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/03 23:47:27 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*first_str(char const *s, int index)
{
	char	*out;
	int		i;

	out = (char *)malloc((index + 1) * sizeof(char));
	if (!out)
		return (0);
	i = -1;
	while (i++ < index)
		out[i] = s[i];
	out[i] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;

	out = (char **)malloc(3 * sizeof(char *));
	if (!out)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	out[0] = first_str(s, i);
	if (!*(s + i))
		out[1] = ft_strdup(s + i);
	else
		out[1] = ft_strdup(s + i + 1);
	out[2] = 0;
	if (s)
		free((void *)s);
	return (out);
}
