/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:37:00 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/09 22:30:20 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t		int_pr(va_list ap, t_poption *flag)
{
	char	*tmp_s;
	size_t	len;
	ssize_t return_value;
	long	arg;
	int		minus;

	arg = (long)va_arg(ap, int);
	minus = (arg < 0) ? 1 : 0;
	if (minus)
		arg *= -1;
	if (!arg && !flag->period && flag->number)
		tmp_s = make_null();
	else if (!arg)
		tmp_s = make_zero();
	else
		tmp_s = ft_itoa(arg);
	if (!tmp_s)
		return (-1);
	len = (int)ft_strlen(tmp_s);
	return_value = int_excute(tmp_s, flag, len, minus);
	free(tmp_s);
	return (return_value);
}

ssize_t		string_pr(va_list ap, t_poption *flag)
{
	char	*tmp_s;
	char	*dup;
	int		return_value;

	dup = va_arg(ap, char*);
	if (!dup)
	{
		return_value = string_excute("(null)", flag);
	}
	else
	{
		tmp_s = ft_strdup(dup);
		if (!tmp_s)
			return (-1);
		return_value = string_excute(tmp_s, flag);
		free(tmp_s);
	}
	return (return_value);
}

ssize_t		char_pr(va_list ap, t_poption *flag)
{
	char	tmp_s[2];
	ssize_t return_value;

	tmp_s[0] = (char)va_arg(ap, int);
	tmp_s[1] = '\0';
	return_value = 0;
	if (!flag->hyphen)
		return_value += write_string(' ', flag->asterisk - 1);
	write(1, tmp_s, 1);
	if (flag->hyphen)
		return_value += write_string(' ', flag->asterisk - 1);
	return_value += 1;
	return (return_value);
}

ssize_t		percent_pr(t_poption *flag)
{
	char	tmp_s[2];
	ssize_t return_value;

	tmp_s[0] = '%';
	tmp_s[1] = '\0';
	return_value = onec_excute(tmp_s, flag, flag->hyphen);
	return (return_value);
}

char		*make_zero(void)
{
	char	*tmp_s;

	tmp_s = malloc(2);
	tmp_s[0] = '0';
	tmp_s[1] = '\0';
	return (tmp_s);
}
