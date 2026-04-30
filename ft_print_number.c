/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfeghali <rfeghali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:52:50 by rfeghali          #+#    #+#             */
/*   Updated: 2026/04/30 15:39:32 by rfeghali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		len = 1;
		if (nb < 0)
			nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa(int n)
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

int	ft_print_number(int n)
{
	char	*nb;
	int		len;

	nb = ft_itoa(n);
	len = ft_print_str(nb);
	free(nb);
	return (len);
}
