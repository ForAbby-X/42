#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	res = (char *)malloc(sizeof(char) * (len + ft_strlen(s2) + 1));
	if (!res)
		return (0);
	i = 0;
	while (s1[i])
	{
		res[i] = s2[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[len + i] = s2[i];
		i++;
	}
	res[i] = 0;
	return (res);
}