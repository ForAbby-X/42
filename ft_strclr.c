#include "libft.h"

void	ft_strclr(char *str)
{
	while (*str)
	{
		*str = 0;
		str++;
	}
}