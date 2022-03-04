#include "libft.h"

char	*strdup(const char *s)
{
	char	*cpy;
	size_t	i;

	cpy = malloc(sizeof(char) * (strlen(s) + 1));
	if (!cpy)
		return (0);
	i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}