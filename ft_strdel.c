#include "libft.h"

void	ft_strdel(char **ap)
{
	free(*ap);
	*ap = 0;
}