/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktsukamo <ktsukamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:44:58 by motttyam          #+#    #+#             */
/*   Updated: 2024/04/27 20:10:34 by ktsukamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count_format;
	
	va_start(args, format);
	count_format = ft_count_format(&args, format);
	va_end(args);
	return (count_format);
}

int	ft_count_format(va_list *args, const char *format)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			format++;
			count++;
		}
		else
		{
			count += ft_handle_format(args, *(format + 1));
			format += 2;
		}
	}
	return (count);
}

int	ft_handle_format(va_list *args, char c)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(*args, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(*args, char *), 1));
	else if (c == 'p')
		return (ft_puthex_uns((unsigned long int)va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(*args, int), 1));
	else if (c == 'u')
		return (ft_putnbr_uns_fd(va_arg(*args, unsigned int), 1));
	else if (c == 'x')
		return (ft_puthex(va_arg(*args, int), 2));
	else if (c == 'X')
		return (ft_puthex(va_arg(*args, int), 0));
	else if (c == '%')
		return (ft_putchar_fd(c, 1));
	else
		return (0);
}

// %c: 1文字。
// %s: 文字列。
// %p: ポインタのアドレス、16進数。
// %d: 符号付き整数。
// %i: %dと同じ、符号付き整数。
// %u: 符号なし整数。
// %x: 16進数、小文字。
// %X: 16進数、大文字。
// %%: %記号。