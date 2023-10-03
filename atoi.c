/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:33:43 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 19:27:35 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	long	result;
	int		i;
	int		pos_neg;

	result = 0;
	i = 0;
	pos_neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		pos_neg = str[i++] - '.';
	else if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	if (result > 2147483648 && pos_neg == -1)
		return (0);
	if (result > 2147483648 && pos_neg == 1)
		return (0);
	return ((int)result * pos_neg);
}
