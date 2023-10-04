/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:03:06 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/04 14:18:32 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0)
		return (0);
	result = (void *)malloc(size * nmemb);
	if (!result)
		return (0);
	while (nmemb-- > 0)
		*(unsigned char *)(result + nmemb) = 0;
	return (result);
}
