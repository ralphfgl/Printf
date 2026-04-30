/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfeghali <rfeghali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:09:47 by rfeghali          #+#    #+#             */
/*   Updated: 2026/04/30 14:24:45 by rfeghali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len = 1;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*ft_utoa(unsigned int n)
{
	char	*res;
	long	nb;
	size_t	len;

	nb = n;
	len = num_len(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	if (nb == 0)
		return (res[0] = '0', res);
	while (nb > 0)
	{
		res[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}

int	ft_print_unsigned(unsigned int u)
{
	int		len;
	char	*nb;

	nb = ft_utoa(u);
	len = ft_print_str(nb);
	free(nb);
	return (len);
}
