/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:51:56 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/23 17:00:37 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_vars
{
	int		i;
	int		n;
}					t_vars;

int		ft_putcharinc_fd(char c, int fd, int len);
int		ft_putstrinc_fd(char *c, int fd, int len);
int		ft_checktype(const char *s, int i, int len, va_list *args);
int		ft_signed(long n, unsigned int base, char *s, int len);
int		ft_u(long n, unsigned int base, char *s, int len);
int		ft_printf(const char *text, ...);

#endif