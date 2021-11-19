#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
#include<stdlib.h>
# include <stdarg.h>

unsigned int    ft_print_hexa_lower(unsigned long int hexa);
int	ft_putchar(char c);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
unsigned int    ft_print_hexa_upper(unsigned long hexa);
int	ft_printf(const char *s, ...);
int	ft_print_p(unsigned long int p);

#endif