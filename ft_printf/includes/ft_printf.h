/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:13:44 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 15:41:52 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printstr(char *str);
int	ft_print_precent(void);
int	ft_printnbru(unsigned int n);
int	ft_printhex(unsigned int num, const char format);
int	ft_printptr(unsigned long long ptr);
int	ft_putchar(char c);
int	ft_putnbr(int n);

#endif