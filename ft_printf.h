/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfeghali <rfeghali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:05:50 by rfeghali          #+#    #+#             */
/*   Updated: 2026/04/29 12:42:15 by rfeghali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_number(int n);
int		ft_print_unsigned(unsigned u);
int		ft_print_addr(unsigned long long addr);
int		ft_print_hexa(unsigned long long hex);
int		ft_printf(const char *fmt, ...);

#endif
