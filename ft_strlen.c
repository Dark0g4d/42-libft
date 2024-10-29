// dont forget Stdheader
#include "libft.h"
size_t	strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
