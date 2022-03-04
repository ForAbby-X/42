#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!c)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == c)
			return (((char *)s) + i);
		((char *)s)[i] = c;
		i++;
	}
	return (0);
}