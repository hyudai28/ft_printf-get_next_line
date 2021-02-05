/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 13:41:06 by hyudai            #+#    #+#             */
/*   Updated: 2020/12/18 18:41:55 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		gnl_stdin(char **line)
{

	return (0);
}

int		get_next_line(int fd, char **line)
{
	char		*buf;
	ssize_t		r_result;
	static char	*s_save[256];
	int			finish_flag;
	int			chr;

	finish_flag = 0;
	if (fd == 0)
		gnl_stdin(line);
	if (buf = malloc((long)BUFFER_SIZE + 1))
		return (-1);
	r_result = read(fd, buf, BUFFER_SIZE);
	if (r_result == 0)
		finish_flaga = 1;
	else if (r_result == -1)
	{
		free(buf);
		return (-1);
	}
	chr = ft_strchr(buf, '\n');
	if (chr == NULL)
	{

	}
	else
	{

	}


}
