#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	if (!c)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((char *)src)[i] == c)
			return (dest + i + 1);
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (0);
}