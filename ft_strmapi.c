#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	res = (char *)malloc(ft_strlen(str) + 1);
	if (!res)
		return (0);
	i = 0;
	while (str[i])
	{
		res[i] = f(i, str[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}