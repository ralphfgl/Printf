/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfeghali <rfeghali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:32:51 by rfeghali          #+#    #+#             */
/*   Updated: 2026/04/30 15:40:35 by rfeghali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_print_addr(unsigned long long addr);
int		ft_print_char(char c);
int		ft_printf(const char *fmt, ...);
int		ft_print_hexa(unsigned int hex, char fmt);
int		ft_print_number(int n);
int		ft_print_str(char *s);
int		ft_print_unsigned(unsigned int u);
size_t	ft_strlen(const char *s);

#endif
