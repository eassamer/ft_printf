#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void    ft_print_hexa(int hexa);
void ft_putchar(char c);
void	ft_putnbr_u(unsigned int n);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void    ft_print_hexa_u(int hexa);

#endif