/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfeghali <rfeghali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:11:06 by rfeghali          #+#    #+#             */
/*   Updated: 2026/04/30 15:07:12 by rfeghali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print(unsigned long long hex)
{
	int	len;

	len = 0;
	if (hex > 15)
		len += ft_print(hex / 16);
	len += ft_print_char("0123456789abcdef"[hex % 16]);
	return (len);
}

int	ft_print_addr(unsigned long long addr)
{
	int	len;

	len = 0;
	if (!addr)
		return (ft_print_str("(nil)"));
	len += ft_print_str("0x");
	len += ft_print(addr);
	return (len);
}
