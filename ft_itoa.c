/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:18:29 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/04 15:44:36 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*out;

	out = (char *)malloc(size * sizeof(char));
	if (!out)
		return (0);
	ft_bzero(out, size);
	return (out);
}

void	compute_sign_len(int n, int *sign, int *len)
{
	*sign = n / 10;
	*len = 1;
	while (*sign)
	{
		(*len)++;
		(*sign) /= 10;
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
	out = ft_strnew((size_t)(len + 1));
	if (!out)
		return (0);
	if (sign)
		out[0] = '-';
	if (n < 0)
		n = -n;
	out = compute_str(out, len, sign, n);
	return (out);
}
