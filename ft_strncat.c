#include "libft.h"

char	*strncat(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	len = strlen(dest);
	i = 0;
	while (dest[len + i] && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = 0;
	return (dest);
}