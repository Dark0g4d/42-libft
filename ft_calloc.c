#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 || nmemb > (size_t)-1 / size)
		return(NULL);
	ptr = malloc(nmemb * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}
