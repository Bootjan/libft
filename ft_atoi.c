/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:33:43 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/05 11:15:58 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	result;
	int		i;
	int		pos_neg;

	result = 0;
	i = 0;
	pos_neg = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\v'))
		i++;
	if (str[i] == '-')
	{
		i++;
		pos_neg = -1;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	if (result > 2147483648 && pos_neg == -1)
		return (0);
	if (result > 2147483647 && pos_neg == 1)
		return (0);
	return ((int)result * pos_neg);
}
