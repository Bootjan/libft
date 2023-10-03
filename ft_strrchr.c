/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:52:43 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/02 14:28:50 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*out;
	char	*current;

	out = 0;
	current = (char *)s;
	while (*current)
	{
		if (*current == c)
			out = current;
		current++;
	}
	if (c == 0)
	{
		out = current;
		return (out);
	}
	return (out);
}
