/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:16:34 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/19 21:48:46 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdio.h>
static void	print_value(char format, const void *v, int *len)
{
	if (format == 'd' || format == 'i')
		*len += ft_putnbr((int)v);
	else if (format == 'u')
		*len += ft_putnbr_u((unsigned int)v);
	else if (format == 's')
		*len += ft_putstr((char *)v);
	else if (format == 'c')
		*len += ft_putchar((char)v);
	else if (format == 'x')
		*len += ft_print_hexa_lower((unsigned int)v);
	else if (format == 'X')
		*len += ft_print_hexa_upper((unsigned int)v);
	else if (format == '%')
		*len += ft_putchar('%');
	else if (format == 'p')
		*len = ft_print_p((unsigned long)v);
}

int	ft_printf(const char *format, ...)
{
	void		*next;
	va_list		lst;
	int			len;

	len = 0;
	va_start(lst, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format != '%')
				next = va_arg(lst, void *);
			print_value(*format, next, &len);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(lst);
	return (len);
}

int main ()
{
	int a;
	//ft_printf("%d\n",ft_printf("%p;\n", &a));
	ft_printf("%d\n",printf("%p;\n", -1));
}