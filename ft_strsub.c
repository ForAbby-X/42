#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (len == 0)
			return (0);
	sub = (char *)malloc(sizeof(char) * len);
	if (!sub)
		return (0);
	i = 0;
	while (str[start + i])
	{
		sub[i] = str[start + i];
		i++;
	}
	return (sub);
}