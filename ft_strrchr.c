/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:52:43 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/10 15:17:42 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*out;
	char	*current;
	size_t	i;

	out = 0;
	current = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (current[i] == c)
			out = &current[i];
		i--;
	}
	return (out);
}
