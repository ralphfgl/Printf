/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfeghali <rfeghali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:04:56 by rfeghali          #+#    #+#             */
/*   Updated: 2026/04/30 15:23:13 by rfeghali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>

static size_t	ft_parse_format(char fmt, va_list args)
{
	size_t	len;

	len = 0;
	if (fmt == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (fmt == 's')
		len += ft_print_str(va_arg(args, char *));
	else if (fmt == 'p')
		len += ft_print_addr(va_arg(args, unsigned long long));
	else if (fmt == 'd' || fmt == 'i')
		len += ft_print_number(va_arg(args, int));
	else if (fmt == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (fmt == 'x' || fmt == 'X')
		len += ft_print_hexa(va_arg(args, unsigned long long), fmt);
	else if (fmt == '%')
		len += ft_print_char('%');
	return (len);
}

int ft_printf(const char *fmt, ...)
{
	va_list	args;
	size_t	len;
	size_t	i;

	va_start(args, fmt); 
	len = 0;
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
			len += ft_parse_format((char)fmt[++i], args);
		else
			len += ft_print_char(fmt[i]);
		i++;
	}
	va_end(args);
	return (len);
}
