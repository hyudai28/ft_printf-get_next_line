/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pr02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:38:53 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/08 15:52:56 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t		unsigned_pr(va_list ap, t_poption *flag)
{
	char			*tmp_s;
	size_t			len;
	ssize_t			return_value;
	unsigned long	arg;

	arg = (unsigned long)va_arg(ap, unsigned int);
	tmp_s = ft_itoa(arg);
	if (!tmp_s)
		return (-1);
	len = (int)ft_strlen(tmp_s);
	if (arg == 0 && !flag->period)
		return_value = 0;
	else
		return_value = int_excute(tmp_s, flag, len, 0);
	free(tmp_s);
	return (return_value);
}

ssize_t		hex_pr(va_list ap, t_poption *flag)
{
	int				l;
	int				len;
	unsigned long	num;
	char			*answer;
	int				return_value;

	num = va_arg(ap, unsigned long);
	l = un_digit(num);
	answer = malloc(l + 2);
	answer[l + 1] = '\0';
	answer = hex_small(num, l, answer);
	len = ft_strlen(answer);
	return_value = hex_excute(answer, flag, len, num);
	free(answer);
	return (return_value);
}

ssize_t		large_hex_pr(va_list ap, t_poption *flag)
{
	int				l;
	int				len;
	unsigned long	num;
	char			*answer;
	int				return_value;

	num = va_arg(ap, unsigned long);
	l = un_digit(num);
	answer = malloc(l + 2);
	answer[l + 1] = '\0';
	answer = hex_large(num, l, answer);
	len = ft_strlen(answer);
	return_value = hex_excute(answer, flag, l, num);
	free(answer);
	return (return_value);
}

ssize_t		pointer_pr(va_list ap, t_poption *flag)
{
	int				l;
	unsigned long	num;
	char			*answer;
	int				return_value;

	num = va_arg(ap, unsigned long);
	l = un_digit(num);
	answer = malloc(l + 1);
	answer[l] = '\0';
	answer = hex_pointer(num, l, answer);
	if (!flag->number && !flag->asterisk && !flag->period &&
		!flag->zero && !flag->hyphen && !num)
	{
		write(1, "0x0", 3);
		return_value = 3;
	}
	else
		return_value = pointer_excute(answer, flag, l);
	free(answer);
	return (return_value);
}

int			un_digit(unsigned long k)
{
	int i;

	i = 0;
	while (k > 0)
	{
		k /= 16;
		i++;
	}
	return (i);
}
