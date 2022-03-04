#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	tmp;

	tmp = n;
	if (n < 0)
	{
		write(1, "-",1);
		tmp = -n;
	}
	if (tmp >= 10)
		ft_putnbr(tmp / 10);
	write(1, &"0123456789"[tmp % 10], 1);
}