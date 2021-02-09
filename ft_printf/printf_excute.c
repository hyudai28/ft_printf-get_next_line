/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_excute.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:43:39 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/09 21:13:52 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		onec_excute(char *tmp_s, t_poption *flag, int minus)
{
	int		ast;
	int		per;
	int		r_value;

	(void)minus;
	ast = flag->asterisk;
	per = flag->period;
	r_value = 0;
	if (!(flag->hyphen) && !flag->zero)
		r_value += write_string(' ', ast - 1);
	else if (flag->zero && ast > 1)
		r_value += write_string('0', ast - 1);
	write(1, tmp_s, 1);
	if ((flag->hyphen))
		r_value += write_string(' ', ast - 1);
	r_value += 1;
	return (r_value);
}

int		hex_excute(char *tmp_s, t_poption *flag, int len, unsigned long num)
{
	int		ast;
	int		per;
	int		r_value;

	(void)num;
	ast = flag->asterisk;
	per = flag->period;
	r_value = 0;
	if (ast >= len && ast > per && !flag->zero &&
			!(flag->hyphen))
		r_value += write_string(' ', (per > len) ? ast - per : ast - len);
	else if (flag->zero && flag->number)
		r_value += write_string(' ', (per > len) ? ast - per : ast - len);
	if ((flag->zero && !per) && (ast >= len))
		r_value += write_string('0', ast - len);
	if ((per >= len))
		r_value += write_string('0', per - len);
	write(1, tmp_s, len);
	if (ast >= len && ast > per && (!flag->zero) &&
			(flag->hyphen))
		r_value += write_string(' ', (per > len) ? ast - per : ast - len);
	r_value += len;
	return (r_value);
}

int		int_excute(char *tmp_s, t_poption *flag, int len, int minus)
{
	int		ast;
	int		per;
	int		r_value;

	ast = flag->asterisk - minus;
	per = flag->period;
	r_value = 0;
	if (ast >= len && ast > per && !flag->zero &&
			!(flag->hyphen))
		r_value += write_string(' ', (per > len) ? ast - per : ast - len);
	else if (flag->zero && flag->number)
		r_value += write_string(' ', (per > len) ? ast - per : ast - len);
	if (minus)
		write(1, "-", 1);
	if ((flag->zero && !flag->pre) && (ast >= len))
		r_value += write_string('0', ast - len);
	else if ((per >= len))
		r_value += write_string('0', per - len);
	write(1, tmp_s, len);
	if (ast >= len && ast > per && (!flag->zero) &&
			(flag->hyphen))
		r_value += write_string(' ', (per > len) ? ast - per : ast - len);
	r_value += len + minus;
	return (r_value);
}

int		pointer_excute(char *tmp_s, t_poption *flag, int len)
{
	int		ast;
	int		per;
	int		r_value;

	ast = flag->asterisk;
	per = flag->period;
	r_value = 0;
	if (ast >= len && ast > per && !flag->zero &&
			!(flag->hyphen))
		r_value += write_string(' ', (per > len) ? ast - per : ast - len - 2);
	if ((flag->zero && !per) && (ast >= len))
		r_value += write_string('0', ast - len - 2);
	if ((per >= len))
		r_value += write_string('0', per - len - 2);
	write(1, "0x", 2);
	write(1, tmp_s, len);
	if (ast >= len && ast > per && (!flag->zero) &&
			(flag->hyphen))
		r_value = write_string(' ', (per > len) ? ast - per : ast - len - 2);
	r_value += 2 + len;
	return (r_value);
}

int		string_excute(char *s, t_poption *flag)
{
	int		len;
	int		return_value;

	return_value = 0;
	len = ft_strlen(s);
	if (flag->number)
	{
		len = len < flag->period ? len : flag->period;
	if (!flag->hyphen)
		return_value += write_string(' ', flag->asterisk - len);
		write(1, &s[0], len);
	if (flag->hyphen)
		return_value += write_string(' ', flag->asterisk - len);
	}
	else
	{
		if (!flag->hyphen && flag->asterisk > len && !flag->zero)
			return_value += write_string(' ', flag->asterisk - len);
		else if (flag->zero)
			return_value += write_string('0', flag->asterisk - len);
		write(1, &s[0], len);
		if (flag->hyphen)
			return_value += write_string(' ', flag->asterisk - len);
	}
	return_value += len;
	return (return_value);
}
