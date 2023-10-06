/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:03:06 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/06 10:26:13 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	total_size;

	total_size = size * nmemb;
	if (total_size == 0)
		return (0);
	result = malloc(total_size);
	if (!result)
		return (0);
	ft_bzero(result, nmemb);
	return (result);
}
