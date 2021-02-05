/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 19:49:28 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/05 19:47:56 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	count;
	char	*p;

	p = buf;
	count = 0;
	while (count++ < n)
		p[count - 1] = ch;
	return ((void *)p);
}

size_t		gnl_strchr(const char *s, int c)
{
	int		i;

	c = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int		ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

