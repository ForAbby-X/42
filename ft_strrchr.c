#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t	i;

	if (!c)
		return (0);
	i = strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (((char *)s) + i);
		((char *)s)[i] = c;
		i++;
	}
	return (0);
}