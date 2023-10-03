/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:10:16 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/02 15:41:31 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		size;
	char	*out;

	size = 0;
	while (s1[size])
		size++;
	i = 0;
	out = (char *)malloc((size + 1) * sizeof(char));
	if (!out)
		return (0);
	while (i < size)
		out[i++] = *s1++;
	out[i] = 0;
	return (out);
}
