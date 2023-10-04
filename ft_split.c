/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:27:28 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/04 14:22:15 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_t_w(const char *s, char c)
{
	int	total_words;
	int	on_word;

	total_words = 0;
	on_word = 0;
	while (*s)
	{
		if (*s != c && on_word == 0)
		{
			total_words++;
			on_word = 1;
		}
		if (*s == c)
			on_word = 0;
		s++;
	}
	return (total_words);
}

char	*append_string(const char *s, int start, int end)
{
	char	*out;
	int		i;

	out = (char *)malloc((end - start + 1) * sizeof(char));
	if (!out)
		return (0);
	i = 0;
	while (start + i < end)
		*out++ = s[start + i++];
	*out = 0;
	return (out - (end - start));
}

int	update_start(char s, char c, int start, int i)
{
	if (s != c && start == -1)
		return (i);
	if (s == c)
		return (-1);
	return (start);
}

char	**ft_split(const char *s, char c)
{
	char	**out;
	int		start;
	int		i;

	out = (char **)malloc((c_t_w(s, c) + 1) * sizeof(char *));
	if (!out)
		return (0);
	start = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && start >= 0)
			*out++ = append_string(s, start, i);
		start = update_start(s[i], c, start, i);
		i++;
	}
	if (start >= 0)
		*out++ = append_string(s, start, i);
	*out = 0;
	return (out - c_t_w(s, c));
}
