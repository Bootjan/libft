/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:56:44 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 19:23:04 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*out;
	size_t	size;
	size_t	i;

	if (!s)
		return (0);
	size = ft_strlen(s);
	out = (char *)malloc((size + 1) * sizeof(char));
	if (!out)
		return (0);
	i = 0;
	while (*s)
		*out++ = (*f)(i++, *s++);
	*out = 0;
	return (out - size);
}
