#include "libft.h"

static size_t	ft_nblen(int nb)
{
	size_t	len;

	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static unsigned int	ft_abs(int nb)
{
	if (nb < 0)
		return ((unsigned int)-nb);
	return ((unsigned int)nb);
}

char	*ft_itoa(int nb)
{
	char	*res;
	size_t	len;

	len = ft_nblen(nb);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = 0;
	res[0] = '0';
	if (nb < 0)
		res[0] = '-';
	while (nb)
	{
		res[len - 1] = ft_abs(nb) % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (res);
}