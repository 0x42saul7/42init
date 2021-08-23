#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 < 99)
	{
		nb2 = nb1;
		while(nb2 <= 99)
		{
			if (nb1 != nb2)
			{
				ft_nbr(nb1);
				ft_putchar(' ');
				ft_nbr(nb2);
				if (nb1 != 98 || nb2 != 99)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			nb2++;
		}
		nb1++;
	}
}
