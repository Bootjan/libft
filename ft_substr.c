/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:30:59 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/10 15:19:35 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	int		i;
	int		j;

	out = (char *)ft_calloc((len + 1), sizeof(char));
	if (!out)
		return (NULL);
	j = 0;
	while (s[j] && start--)
		j++;
	i = 0;
	while (s[j] && len--)
		out[i++] = s[j++];
	return (out);
}
