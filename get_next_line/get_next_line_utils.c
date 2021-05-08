/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 13:46:03 by hyudai            #+#    #+#             */
/*   Updated: 2021/01/10 14:00:09 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		gnl_strchr(const char *s, int c)
{
	int		i;
	int		size;

	c = (char)c;
	i = 0;
	size = ft_strlen(s) + 1;
	while (i < size)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

size_t		ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strnjoin(char *s1, char *s2, size_t chr)
{
	size_t		size;
	size_t		i;
	size_t		j;
	char		*dest;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((dest = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < chr)
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char		*gnl_strdup(char *s1)
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

void		free_all(char **line, char **st_arr, int fd)
{
	free(*line);
	*line = NULL;
	free(st_arr[fd]);
	st_arr[fd] = NULL;
}
