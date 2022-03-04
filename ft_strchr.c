#include "libft.h"

char	*strchr(const char *s, int c)
{
	size_t	i;

	if (!c)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (((char *)s) + i);
		((char *)s)[i] = c;
		i++;
	}
	return (0);
}