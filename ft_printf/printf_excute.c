/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_excute.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:43:39 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/05 19:44:08 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



void	write_string(char c, int len)
{
	int		i;
	i = 0;
	while (i < len)
	{
		write(1, &c, 1);
		i++;
	}
}

int	int_excute(char *tmp_s, t_poption *flag, int len, int minus)
{
	int		ast;
	int		per;
	int		r_value;

	ast = flag->asterisk - minus;
	per = flag->period;
	r_value = 0;
	if (ast >= len && ast > per && (per && !flag->zero) &&
	 !(flag->hyphen))
	 	write_string(' ', (per > len) ? ast - per: ast - len);
	if (minus)
		write(1, "-", 1);
	if ((flag->zero && !per) && (ast >= len))
		write_string('0', ast - len);
	if ((per >= len))
		write_string('0', per - len);
	write(1, tmp_s, len);
	if (ast >= len && ast > per && (per && !flag->zero) &&
	 (flag->hyphen))
	 	write_string(' ', (per > len) ? ast - per: ast - len);
	r_value = ast >= per ? ast : per;
	r_value = r_value >= len ? r_value : len;
	return (r_value);
}

int	pointer_excute(char *tmp_s, t_poption *flag, int len)
{
	int		ast;
	int		per;
	int		r_value;

	ast = flag->asterisk;
	per = flag->period;
	r_value = 0;
	if (ast >= len && ast > per && (per && !flag->zero) &&
	 !(flag->hyphen))
	 	write_string(' ', (per > len) ? ast - per: ast - len);
	if ((flag->zero && !per) && (ast >= len))
		write_string('0', ast - len);
	if ((per >= len))
		write_string('0', per - len);
	write(1, "0x7ffe", 6);
	write(1, tmp_s, len);
	if (ast >= len && ast > per && (per && !flag->zero) &&
	 (flag->hyphen))
	 	write_string(' ', (per > len) ? ast - per: ast - len);
	r_value = ast >= per ? ast : per;
	r_value = r_value >= len ? r_value : len;
	return (r_value);
}

int		string_excute(char	*s, t_poption *flag)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	if (flag->period != 0)
		len = len < flag->period ? len : flag->period;
	if (!flag->hyphen)
		write_string(' ', flag->asterisk - len);
	write(1, &s[0], len);
	i = 0;
	if (flag->hyphen)
		write_string(' ', flag->asterisk - len);
	return (0);
}