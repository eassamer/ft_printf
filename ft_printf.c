/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:16:34 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/17 16:49:26 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdio.h>
int	write_f(char format, const void *v, int *len)
{
	if (format == 'c')
		*len += ft_putchar((char)v);
	else if (format == 'd' || format == 'i')
		*len += ft_putnbr((int)v);
	else if (format == 's')
		*len += ft_putstr((char *)v);
	else if (format == 'u')
		*len += ft_putnbr_u((unsigned int)v);
	else if (format == '%')
		*len += ft_putchar('%');
	else if (format == 'x')
		*len += ft_print_hexa((int)v);
	else if (format == 'X')
		*len += ft_print_hexa_u((int)v);
	return (*len);
}
int	ft_printf(const char *s, ...)
{
	int i;
	int len;
	int *l;
	va_list ap;
	void	*next;
	
	va_start(ap, s);
	i = 0;
	l = &len;
	while (s[i])
	{
		if (s[i] == '%')
		{
			next = va_arg(ap,void *);
			i++;
			len = write_f(s[i], next, l);
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	return (*l);
	va_end(ap);

}

int main()
{
	int i;
	int j;
	i = ft_printf("%c\n",'a');
	j = printf("%c\n",'a');
	printf("%d\n",i);
	printf("%d\n",j);
}