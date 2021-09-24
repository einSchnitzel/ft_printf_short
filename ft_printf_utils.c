/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:55:17 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/24 15:08:02 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**functions printing the corresponding output passed to them
*/
int	ft_putcharinc_fd(char c, int fd, int len)
{
	write(fd, &c, 1);
	len++;
	return (len);
}

int	ft_putstrinc_fd(char *c, int fd, int len)
{
	int	i;

	i = 0;
	if (c == NULL)
	{
		len = ft_putstrinc_fd("(null)", fd, len);
		return (len);
	}
	while (c[i] != '\0')
	{
		write(fd, &c[i], 1);
		i++;
		len++;
	}
	return (len);
}
