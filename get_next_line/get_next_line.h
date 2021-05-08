/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 13:46:24 by hyudai            #+#    #+#             */
/*   Updated: 2021/05/08 18:24:40 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# define BUFFER_SIZE 1

int			get_next_line(int fd, char **line);

size_t		gnl_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);
char		*gnl_strdup(char *s1);
char		*ft_strnjoin(char *s1, char *s2, size_t chr);
void		free_all(char **line, char **st_arr, int fd);

int			find_newline(int fd, char **line, char **st_arr, char *buf);
int			read_fd(int fd, char **line, char **st_arr);

#endif
