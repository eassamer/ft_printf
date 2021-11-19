/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:41:54 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/19 21:46:08 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

unsigned int    ft_print_hexa_lower(unsigned long int hexa)
{
    
        char *base="0123456789abcdef";
    
        static int len_neg = 8;
        unsigned long n;
        static int len_pos = 0;

        n = hexa;
        if(n <= 15)
        {
            len_neg -= ft_putchar(base[n]);
            len_pos++;
        }
        if (n > 15)
        {
           ft_print_hexa_lower(n /16);
           ft_print_hexa_lower(n%16);
        }
        if(n < 0)
            return(len_neg);
        else
            return(len_pos);
}