/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 11:42:16 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/12 18:34:44 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_poption	printf_struct_reset(t_poption flag)
{
	flag.zero = 0;
	flag.period = 0;
	flag.asterisk = 0;
	flag.hyphen = 0;
	flag.number = 0;
	flag.pre = 0;
	flag.ret = 0;
	flag.chr = 0;
	return (flag);
}

int			error_handling(t_poption *flag)
{
	if ((long)flag->period > 2147483648)
		return (-1);
	if ((long)flag->asterisk > 2147483648)
		return (-1);
	if ((long)flag->number > 2147483648)
		return (-1);
	if (flag->period < 0)
		flag->period = 0;
	if (flag->asterisk < 0)
		flag->asterisk = 0;
	if (flag->number < 0)
		flag->number = 0;
	return (0);
}

int			write_string(char c, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		write(1, &c, 1);
		i++;
	}
	return (i);
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

char		*make_null(void)
{
	char	*tmp_s;

	tmp_s = malloc(1);
	tmp_s[0] = '\0';
	return (tmp_s);
}
