#include "libft.h"

void	ft_putendl(char const *str)
{
	_write(1, str, ft_strlen(str));
	_write(1, "\n", 1);
}