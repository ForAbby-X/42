#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	tmp;

	tmp = n;
	if (n < 0)
	{
		write(fd, "-",1);
		tmp = -n;
	}
	if (tmp >= 10)
		ft_putnbr(tmp / 10);
	write(fd, &"0123456789"[tmp % 10], 1);
}