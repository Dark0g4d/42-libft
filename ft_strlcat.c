#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;
	
	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dsize == 0)
		return (src_len);
	if (dsize <= dst_len)
		return (src_len + dst_len);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst_len + src_len);
}
