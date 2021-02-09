/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pr02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:38:53 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/09 22:27:46 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t		unsigned_pr(va_list ap, t_poption *flag)
{
	char			*tmp_s;
	size_t			len;
	ssize_t			return_value;
	unsigned long	num;

	num = va_arg(ap, unsigned long);
	if (!num && !flag->period && flag->number)
		tmp_s = make_null();
	else if (!num)
		tmp_s = make_zero();
	else
	{
		tmp_s = ft_itoa(num);
		if (!tmp_s)
			return (-1);
	}
	len = (int)ft_strlen(tmp_s);
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
	if (!num && !flag->pre && flag->number)
		answer = make_null();
	else if (!num)
		answer = make_zero();
	else
	{
		answer = malloc(l + 1);
		answer[l] = '\0';
		answer = hex_small(num, l, answer);
	}
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
	if (!num && !flag->pre && flag->number)
		answer = make_null();
	else if (!num)
		answer = make_zero();
	else
	{
		answer = malloc(l + 1);
		answer[l] = '\0';
		answer = hex_large(num, l, answer);
	}
	len = ft_strlen(answer);
	return_value = hex_excute(answer, flag, len, num);
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
	if (!num && !flag->pre && flag->number)
		answer = make_null();
	else if (!num)
		answer = make_zero();
	else
	{
		answer = malloc(l + 1);
		answer[l] = '\0';
		answer = hex_pointer(num, l, answer);
	}
	if (!flag->number && !flag->period && !flag->zero && !num)
		return_value = point_write();
	else
		return_value = pointer_excute(answer, flag, l);
	free(answer);
	return (return_value);
}

int			point_write(void)
{
	write(1, "0x0", 3);
	return (3);
}
