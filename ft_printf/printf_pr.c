/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:37:00 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/08 17:44:13 by hyudai           ###   ########.fr       */
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
	tmp_s = ft_itoa(arg);
	if (!tmp_s)
		return (-1);
	len = (int)ft_strlen(tmp_s);
	/*
	if (arg == 0 && !flag->period && flag->number && !flag->asterisk)
		return_value = 0;*/
	/*else*/ if (arg == 0 && flag->number)
		return_value = int_0_excute(flag);
	else
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


int		int_0_excute(t_poption *flag)
{
	int		ast;
	int		per;
	int		r_value;

	ast = flag->asterisk;
	per = flag->period;
	r_value = 0;
	if (ast > per && !flag->zero && !(flag->hyphen))
		r_value += write_string(' ', ast - per);
	else if (flag->zero && flag->number)
		r_value += write_string(' ', ast - per);
	if ((flag->zero && !per))
		r_value += write_string('0', ast);
	if ((per >= 1) && ast <= per)
		r_value += write_string('0', per);
	if (ast > per && (!flag->zero) && (flag->hyphen))
		r_value += write_string(' ', ast - per);
	return (r_value);
}