/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:51:01 by aciobanu          #+#    #+#             */
/*   Updated: 2025/02/12 15:46:19 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_print_unsigned(unsigned int n);
int		ft_printstr(char *s);
int		ft_putchar(int c);
int		ft_percent(void);
int		ft_ptr(unsigned long long ptr);
int		ft_putnbr(int n);
int		ft_printhex(unsigned int num, const char format);
int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *s);

#endif
