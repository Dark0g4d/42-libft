#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[i + 1] && s[i + 1] != c)
		i++;
	if (s[i + 1] == c)
		return ((char *)&s[i + 1]);
	return (NULL);
}
