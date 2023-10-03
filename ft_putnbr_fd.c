/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:02:11 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 19:58:54 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr_helper(long n, int fd)
{
	int	placeholder;

	if (n <= 9)
	{
		placeholder = n + '0';
		write(fd, &placeholder, 1);
	}
	else
	{
		placeholder = n % 10 + '0';
		ft_putnbr_helper(n / 10, fd);
		write(fd, &placeholder, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (n < 0)
	{
		write(1, "-", 1);
		x = n;
		x *= -1;
	}
	ft_putnbr_helper(x, fd);
}
