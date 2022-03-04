#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = malloc(n);
	if (!tmp)
		return (0);
	i = 0;
	while (i < n)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	free((void *)src);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}