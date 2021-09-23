/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:50:48 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/23 16:44:03 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_signed(long n, unsigned int base, char *s, int len)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
		len++;
	}
	if (n >= 0)
	{
		len = ft_unsigned(n / base, base, s, len);
	}
	len = ft_putcharinc_fd(s[n % base], 1, len);
	return (len);
}

int	ft_unsigned(long n, unsigned int base, char *s, int len)
{
	if (n > base)
	{
		len = ft_unsigned(n / base, base, s, len);
	}
	len = ft_putcharinc_fd(s[n % base], 1, len);
	return (len);
}

int	ft_checktype(const char* s, int i, int len, va_list *args)
{
	if (s[i] == '%')
		len = ft_putcharinc_fd('%', 1, len);
	else if (s[i] == 'c')
		len = ft_putcharinc_fd((char)va_arg(*args, int), 1, len);
	else if(s[i] == 's')
		len = ft_putstrinc_fd(va_arg(*args, char*), 1, len);
	else if(s[i] == 'd' || s[i] == 'i')
		len = ft_signed(va_arg(*args, int), 10, "0123456789", len);
	else if(s[i] == 'u')
		len = ft_unsigned(va_arg(*args, int), 10, "0123456789", len);
	else if(s[i] == 'x')
		len = ft_unsigned(va_arg(*args, int), 16, "0123456789abcdef", len);
	else if(s[i] == 'X')
		len = ft_unsigned(va_arg(*args, int), 16, "0123456789ABCDEF", len);
	else if(s[i] == 'p')
	{
		write(1 ,"0x" , 2);
		len = len + 2;
		len = ft_unsigned((long)va_arg(*args, void*), 16, "0123456789abcdef", len);
	}
	return (len);
}

int	ft_printf(const char* text, ...)
{
	int		length;
	int		i;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, text);
	while (text[i] != '\0')
	{
		if (text[i] == '%')
		{	
			length = ft_checktype(text, i + 1, length, &args);
			i = i + 1;
		}
		else
		{
			write(1, &text[i], 1);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}