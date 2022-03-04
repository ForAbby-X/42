#include "libft.h"

char	*strnstr(const char *meule_de_foin, const char *aiguille, size_t n)
{
	size_t	i;
	size_t	j;

	if (!aiguille[0])
		return ((char *)meule_de_foin);
	i = 0;
	while (((char *)meule_de_foin)[i] && i < n)
	{
		j = 0;
		while (((char *)meule_de_foin)[i + j] == ((char *)aiguille)[j] && i + j < n)
			j++;
		if (!((char *)aiguille)[j])
			return ((char *)meule_de_foin + i);
		i++;
	}
	return (0);
}