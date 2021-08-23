#include <unistd.h>

void	ft_print_comb(void)
{
	char	h;
	char	d;
	char	u;

	h = '0' - 1;
	while (h++ <= '7')
	{
		d = h;
		while (d++ <= '8')
		{
			u = d;
			while (u++ < '9')
			{
				write(1, &h, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (h < '7')
					write(1, ", ", 2);	
			}	
		}
	}
}