/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:09:04 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/19 21:17:48 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

unsigned int    ft_print_hexa_upper(unsigned long hexa)
{
    
        char *base="0123456789ABCDEF";
    
        static int len_neg = 8;
        static int len_pos = 0;
        if(hexa <= 15)
        {
            len_neg -= ft_putchar(base[hexa]);
            len_pos++;
        }
        if (hexa > 15)
        {
           ft_print_hexa_upper(hexa / 16);
           ft_print_hexa_upper(hexa % 16);
        }
        if(hexa < 0)
            return(len_neg);
        else
            return(len_pos);
}