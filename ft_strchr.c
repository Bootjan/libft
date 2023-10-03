/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:53:18 by bootjan           #+#    #+#             */
/*   Updated: 2023/07/11 21:02:40 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*out;

	out = (char *)s;
	while (*out)
	{
		if (*out == c)
			return (out);
		out++;
	}
	if (c == 0)
		return (out);
	return (0);
}
