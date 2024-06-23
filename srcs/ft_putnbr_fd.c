/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktsukamo <ktsukamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:49:03 by ktsukamo          #+#    #+#             */
/*   Updated: 2024/04/27 19:19:00 by ktsukamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	put_recursive(int n, int fd, int *count)
{
	char	c;

	if (n >= 10)
	{
		(*count)++;
		put_recursive(n / 10, fd, count);
	}
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	count;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	count = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		count++;
	}
	put_recursive(n, fd, &count);
	return (count + 1);
}
