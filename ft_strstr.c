#include "libft.h"

char	*strstr(char const *meule_de_foin, char const *aiguille)
{
	size_t	i;
	size_t	j;

	if (!aiguille[0])
		return ((char *)meule_de_foin);
	i = 0;
	while (meule_de_foin[i])
	{
		j = 0;
		while (meule_de_foin[i + j] == aiguille[j])
			j++;
		if (!aiguille[j])
			return ((char *)meule_de_foin + i);
		i++;
	}
	return (0);
}