/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:17:50 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/05 17:44:20 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_poption
{
	int		zero;
	int		period;
	int		asterisk;
	int		hyphen;
	int		number;
	int		ret;
	va_list	ap_list;
}				t_poption;

int				ft_printf(const char *s, ...);

t_poption	printf_struct_reset(t_poption flag);
int 		fl_check_num(char *string, t_poption *flag, va_list ap, int i);
int			fl_check(char *string, t_poption *flag, va_list ap, int i);
int			mod_management(char *string, t_poption flag, va_list ap, int i);

void		write_string(char c, int len);
int			int_excute(char *tmp_s, t_poption *flag, int len, int minus);
int			string_excute(char *tmp_s, t_poption *flag);
int	pointer_excute(char *tmp_s, t_poption *flag, int len);
char   	 	 *hex_pointer(int num, int l, char *answer);
char   	 	 *hex_large(unsigned int num, int l, char *answer);
char   		 *hex_small(unsigned int num, int l, char *answer);



ssize_t		string_pr(va_list ap, t_poption *flag);
ssize_t		int_pr(va_list ap, t_poption *flag);
ssize_t		char_pr(va_list ap, t_poption *flag);
ssize_t		unsigned_pr(va_list ap, t_poption *flag);
ssize_t		percent_pr(t_poption *flag);
ssize_t		large_hex_pr(va_list ap, t_poption *flag);
ssize_t		hex_pr(va_list ap, t_poption *flag);
ssize_t		pointer_pr(va_list ap, t_poption *flag);
// int		error_handling(flag);


int un_digit(unsigned int k);

size_t		gnl_strchr(const char *s, int c);
int			ft_isdigit(int c);
int			ft_atoi(const char *str);
int			ft_isspace(char c);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *buf, int ch, size_t n);
void		*ft_calloc(size_t count, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_itoa(long k);
char		*ft_strdup(const char *s1);

#endif
