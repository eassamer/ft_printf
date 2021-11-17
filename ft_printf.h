#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
#include<stdlib.h>
# include <stdarg.h>

int ft_print_hexa(int hexa);
int	ft_putchar(char c);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int    ft_print_hexa_u(int hexa);
int	ft_printf(const char *s, ...);
int	write_f(char format, const void *v, int *len);

#endif