/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:18:29 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/05 11:15:21 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	compute_sign_len(int n, int *sign, int *len)
{
	int	temp;

	temp = n / 10;
	*len = 1;
	while (temp)
	{
		(*len)++;
		temp /= 10;
	}
	*sign = 0;
	if (n < 0)
	{
		*sign = 1;
		(*len)++;
	}
}

char	*compute_str(char *out, int len, int sign, int n)
{
	while (len-- > sign)
	{
		if (n <= 9)
			out[len] = n + '0';
		else
			out[len] = n % 10 + '0';
		n /= 10;
	}
	return (out);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*out;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	compute_sign_len(n, &sign, &len);
	out = ft_calloc(len + 1, sizeof(char));
	if (!out)
		return (0);
	if (sign)
		out[0] = '-';
	if (n < 0)
		n = -n;
	return (compute_str(out, len, sign, n));
}
