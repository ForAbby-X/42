#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*res;
	size_t	i;

	res = (char *)malloc(ft_strlen(str) + 1);
	if (!res)
		return (0);
	i = 0;
	while (str[i])
	{
		res[i] = f(str[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}