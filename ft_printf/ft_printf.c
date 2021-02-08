/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 17:46:20 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/08 15:20:20 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *string, ...)
{
	ssize_t		return_value;
	int			i;
	int			len;
	va_list		ap;
	t_poption	flag;

	va_start(ap, string);
	string = (char *)string;
	i = 0;
	len = (int)ft_strlen(string);
	return_value = 0;
	while (i < len)
	{
		flag = printf_struct_reset(flag);
		flag.chr = gnl_strchr(string + i, '%');
		write(1, string + i, flag.chr);
		i += flag.chr;
		if (string[i] == '%')
			i = mod_management((char *)string, &flag, ap, i);
		if (i == -1)
			return (-1);
		i++;
		return_value += flag.chr + flag.ret;
	}
	return (return_value);
}

int		mod_management(char *string, t_poption *flag, va_list ap, int i)
{
	ssize_t	return_value;

	i = fl_check(string, flag, ap, i);
	i = fl_check_num(string, flag, ap, i);
	if (flag->asterisk < 0 && flag->hyphen)
	{
		flag->asterisk *= -1;
		flag->hyphen = 1;
	}
	if (error_handling(flag) == -1)
		return (-1);
	return_value = mod_check(string, flag, ap, i);
	if (return_value == -1)
		return (-1);
	flag->ret += return_value;
	return (i);
}

int		fl_check(char *string, t_poption *flag, va_list ap, int i)
{
	if (string[++i] == '-')
	{
		flag->hyphen = 1;
		i++;
	}
	if (string[i] == '0')
	{
		flag->zero = 1;
		i++;
	}
	if (ft_isdigit(string[i]))
	{
		while (ft_isdigit(string[i]))
		{
			flag->asterisk *= 10;
			flag->asterisk += string[i] - '0';
			i++;
		}
	}
	else if (string[i] == '*')
	{
		flag->asterisk = va_arg(ap, int);
		i++;
	}
	return (i);
}

int		fl_check_num(char *string, t_poption *flag, va_list ap, int i)
{
	if (string[i] == '.')
	{
		flag->number = 1;
		if (ft_isdigit(string[++i]))
			while (ft_isdigit(string[i]))
			{
				flag->period *= 10;
				flag->period += string[i] - '0';
				i++;
			}
		else if (string[i] == '*')
		{
			flag->period = va_arg(ap, int);
			i++;
		}
	}
	return (i);
}

ssize_t	mod_check(char *string, t_poption *flag, va_list ap, int i)
{
	ssize_t return_value;

	if (string[i] == 'd' || string[i] == 'i')
		return_value = int_pr(ap, flag);
	else if (string[i] == 's')
		return_value = string_pr(ap, flag);
	else if (string[i] == 'c')
		return_value = char_pr(ap, flag);
	else if (string[i] == 'p')
		return_value = pointer_pr(ap, flag);
	else if (string[i] == 'u')
		return_value = unsigned_pr(ap, flag);
	else if (string[i] == 'x')
		return_value = hex_pr(ap, flag);
	else if (string[i] == 'X')
		return_value = large_hex_pr(ap, flag);
	else if (string[i] == '%')
		return_value = percent_pr(flag);
	else
		return_value = -1;
	return (return_value);
}
