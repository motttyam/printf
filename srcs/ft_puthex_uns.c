/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktsukamo <ktsukamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:22:38 by ktsukamo          #+#    #+#             */
/*   Updated: 2024/04/27 19:03:16 by ktsukamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex_uns(unsigned long int num)
{
	int	count;

	count = 0;
	count += 2;
	write(1, "0x", 2);
	ft_puthex_uns_recursive(num, &count);
	return (count + 1);
}

void	ft_puthex_uns_recursive(unsigned long int num, int *count)
{
	char c;
	if (num >= 16)
	{
		ft_puthex_uns_recursive(num / 16, count);
		(*count)++;
	}
	if (num % 16 <= 9)
	{
		c = (num % 16) + '0';
		write(1, &c, 1);
	}
	else if (num % 16 > 9)
	{
		c = (num % 16) - 10 + 'a';
		write(1, &c, 1);
	}
}