/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pr02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:38:53 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/06 18:23:16 by hyudai           ###   ########.fr       */
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
	return_value = int_excute(tmp_s, flag, len, 0);
	free(tmp_s);
	return (return_value);
}

ssize_t		hex_pr(va_list ap, t_poption *flag)
{
	int				l;
	unsigned int	num;
	char			*tmp_s;
	char			*answer;
	int				return_value;

	num = (unsigned int)va_arg(ap, int);
	l = un_digit(num);
	answer = malloc(l + 1);
	answer[l + 1] = '\0';
	tmp_s = hex_small(num, l, answer);
	return_value = int_excute(tmp_s, flag, l, 0);
	free(tmp_s);
	return (return_value);
}

ssize_t		large_hex_pr(va_list ap, t_poption *flag)
{
	int				l;
	unsigned int	num;
	char			*tmp_s;
	char			*answer;
	int				return_value;

	num = (unsigned int)va_arg(ap, int);
	l = un_digit(num);
	answer = malloc(l + 1);
	answer[l + 1] = '\0';
	tmp_s = hex_large(num, l, answer);
	return_value = int_excute(tmp_s, flag, l, 0);
	free(tmp_s);
	return (return_value);
}

ssize_t		pointer_pr(va_list ap, t_poption *flag)
{
	int				l;
	unsigned int	num;
	char			*tmp_s;
	char			*answer;
	int				return_value;

	num = (unsigned int)va_arg(ap, int);
	l = un_digit(num);
	answer = malloc(l + 1);
	answer[l + 1] = '\0';
	tmp_s = hex_small(num, l, answer);
	return_value = pointer_excute(tmp_s, flag, l);
	free(tmp_s);
	return (return_value);
}

int			un_digit(unsigned int k)
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
