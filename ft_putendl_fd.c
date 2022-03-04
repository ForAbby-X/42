#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	_write(fd, str, ft_strlen(str));
	_write(fd, "\n", 1);
}