#include<unistd.h>


static void ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_putnbr(int n)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if ((i >= 0) && (i <= 9))
	{
		ft_putchar((i + '0'));
	}
	if (i > 9)
	{
		ft_putnbr((i / 10));
		ft_putnbr((i % 10));
	}
}