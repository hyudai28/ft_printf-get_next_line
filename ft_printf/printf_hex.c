/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:42:42 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/09 16:18:43 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*hex_large(unsigned long num, int l, char *answer)
{
	int		j;
	char	*henkan;

	j = 0;
	henkan = "0123456789ABCDEF";
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[--l] = henkan[j];
	}
	return (answer);
}

char	*hex_small(unsigned long num, int l, char *answer)
{
	unsigned int	j;
	char			*henkan;

	j = 0;
	henkan = "0123456789abcdef";
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[--l] = henkan[j];
	}
	return (answer);
}

char	*hex_pointer(unsigned long num, int l, char *answer)
{
	unsigned long		j;
	char	*henkan;

	j = 0;
	henkan = "0123456789abcdef";
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[--l] = henkan[j];
	}
	return (answer);
}
