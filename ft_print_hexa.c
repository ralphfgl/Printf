/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfeghali <rfeghali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:41:15 by rfeghali          #+#    #+#             */
/*   Updated: 2026/04/30 14:10:58 by rfeghali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int hex, char fmt)
{
	int	len;

	len = 0;
	if (hex > 15)
		len += ft_print_hexa(hex / 16, fmt);
	if (fmt == 'x')
		len += ft_print_char("0123456789abcdef"[hex % 16]);
	if (fmt == 'X')
		len += ft_print_char("0123456789ABCDEF"[hex % 16]);
	return (len);
}
