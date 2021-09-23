#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

typedef	struct		s_vars
{
	int		i;
	int		n;
}					t_vars;

int		ft_putcharinc_fd(char c, int fd, int len);
int		ft_putstrinc_fd(char *c, int fd, int len);
int		ft_checktype(const char* s, int i, int len, va_list *args);
void	ft_initvars(int *len);
int		ft_signed(long n, unsigned int base, char *s,  int len);
int		ft_unsigned(long n, unsigned int base, char *s, int len);
int		ft_printf(const char *, ...);

#endif