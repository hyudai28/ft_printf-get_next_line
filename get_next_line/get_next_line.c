/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 00:55:54 by hyudai            #+#    #+#             */
/*   Updated: 2020/12/26 23:59:15 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int find_newline(int fd, char **line, char **st_arr, char *buf)
{
	int		chr;
	int		flag;
	char	*str_tmp;
	char	*line_tmp;

	flag = 0;
	chr = gnl_strchr(buf, '\n');
	if (!(line_tmp = ft_strnjoin(*line, buf, chr)))
		return (-1);
	free(*line);
	*line = line_tmp;
	if (buf[chr] == '\n')
	{
		str_tmp = NULL;
		if (!(str_tmp = gnl_strdup(buf + chr + 1, 0)))
			return (-1);
		flag = 1;
	}
	free(st_arr[fd]);
	st_arr[fd] = str_tmp;
	return (flag);
}

int read_fd(int fd, char **line, char **st_arr)
{
	ssize_t r_result;
	char	*buf;
	int		find_new;

	find_new = 0;
	r_result = 1;
	if (!(buf = malloc((size_t)BUFFER_SIZE + 1)))
		return (0);
	while (r_result > 0 && find_new == 0)
	{
		r_result = read(fd, buf, BUFFER_SIZE);
		buf[r_result] = '\0';
		if (r_result == 0)
			break;
		buf[ft_strlen(buf)] = '\0';
		find_new = find_newline(fd, line, st_arr, buf);
		if (r_result == -1)
		{
			free_all(line, st_arr, fd);
			return (-1);
		}
	}
	free(buf);
	return (find_new && r_result);
}

int		get_next_line(int fd, char **line)
{
	static char *st_arr[256];
	int		check;

	if (fd < 0 ||256 < fd)
		return (-1);
	if (!(*line = malloc(1)))
		return (-1);
	*line[0] = '\0';
	if (st_arr[fd])
		check = find_newline(fd, line, st_arr, st_arr[fd]);
	if (check != 1)
		check = read_fd(fd, line, st_arr);
	return (check);
}
