#include "libft.h"

static size_t	ft_strlenchr(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static size_t	ft_strnbw(const char *str, char c)
{
	size_t	i;
	size_t	nbw;
	char	l;

	i = 0;
	nbw = 0;
	l = c;
	while (str[i])
	{
		if (str[i] != c && l == c)
			nbw++;
		l = str[i];
		i++;
	}
	return (nbw);
}

char	**ft_strsplit(char const *str, char c)
{
	size_t	i;
	size_t	nbw;
	size_t	lbw;
	char	**tab;
	
	nbw = ft_strnbw(str, c);
	tab = (char **)malloc(sizeof(char *) * (nbw + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < nbw)
	{
		while (*str == c)
			str++;
		lbw = ft_strlenchr(str, c);
		tab[i] = (char *)malloc(sizeof(char) * (lbw + 1));
		ft_strncpy(tab[i], str, lbw);
		tab[i][lbw] = 0;
		str += lbw;
		i++;
	}
	tab[nbw] = 0;
	return (tab);
}