#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char   *source;
	unsigned char   *destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (destination < source)
		while (n > 0)
		{
			destination[n - 1] = source[n - 1];
			n--;
		}
	if (destination > source)
		while (n--)
			destination[n] = source[n];
	return (dst);
}
