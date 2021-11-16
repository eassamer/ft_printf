/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:16:34 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/16 18:12:24 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	write_f(char format, const void *v)
{
	if (format == 'c')
		ft_putchar((char)v);
	else if (format == 'd' || format == 'i')
		ft_putnbr((int)v);
	else if (format == 's')
		ft_putstr((char *)v);
	else if (format == 'u')
		ft_putnbr_u((unsigned int)v);
	else if (format == '%')
		ft_putchar('%');
	else if (format == 'x')
		ft_print_hexa((int)v);
	else if (format == 'X')
		ft_print_hexa_u((int)v);
}
int	ft_printf(const char *s, ...)
{
	int i;
	va_list ap;
	void	*next;
	
	va_start(ap, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			next = va_arg(ap,void *);
			i++;
			write_f(s[i], next);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return 0;
}

int main()
{
	ft_printf("hello %Xworld",999);
}