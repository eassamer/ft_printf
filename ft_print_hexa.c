/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:41:54 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/16 18:08:44 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void    ft_print_hexa(int hexa)
{
    char *base="0123456789abcdef";
   
   if (hexa < 0)
   {
       hexa *= -1;
       ft_putchar('-');
   }
   
   if(hexa <= 15)
   {
       ft_putchar(base[hexa]);
   }
   
   if (hexa > 15)
   {
       ft_print_hexa(hexa/16);
       ft_print_hexa(hexa%16);
   }
}