#include "libft.h"

static int	ft_is_set(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*res;

	while (ft_is_set(*s1, set))
		s1++;
	len = 0;
	while (s1[len])
		len++;
	if (!len)
		return (0);
	while (len > 0 && ft_is_set(s1[len - 1], set))
		len--;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = 0;
	return (res);
}