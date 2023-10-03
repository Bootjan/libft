/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:06:08 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 19:22:31 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*out;
	size_t			i;

	out = (unsigned char *)b;
	i = 0;
	while (i < len)
		out[i++] = (unsigned char)c;
	return (b);
}
