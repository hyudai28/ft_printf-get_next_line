/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils02.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:46:37 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/06 18:04:59 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, count * size);
	return ((void *)str);
}

int			ft_itoa_count(long int n, int i)
{
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa_saiki(long int n, char *dest, int i, int x)
{
	if (n >= 10)
	{
		ft_itoa_saiki(n / 10, dest, i - 1, x);
	}
	dest[i] = n % 10 + '0';
	if (i == x - 1)
		dest[i] = n % 10 + '0';
	return (dest);
}

char		*ft_itoa(long k)
{
	int			i;
	int			flag;
	long int	n;
	char		*dest;

	n = (long int)k;
	i = 0;
	flag = 0;
	if (n < 0)
	{
		flag = 1;
		i++;
		n *= -1;
	}
	i = ft_itoa_count(n, i);
	dest = (char *)ft_calloc(1, i + 2);
	if (dest == NULL)
		return (NULL);
	if (flag)
		dest[0] = '-';
	ft_itoa_saiki(n, dest, i, i);
	return (dest);
}

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
