/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:30:59 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/03 19:23:17 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	int		i;

	out = (char *)malloc((len + 1) * sizeof(char));
	if (!out)
		return (0);
	while (*s && start--)
		s++;
	if (!*s)
		return (0);
	i = 0;
	while (*s && len--)
		out[i++] = *s++;
	out[i] = 0;
	return (out);
}
