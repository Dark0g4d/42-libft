#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
#include <stdio.h>

int main() {
    char source[] = "hello, world";
    char destination[10];

    // Copy source to destination with a destination buffer size of 10
    size_t result = ft_strlcpy(destination, source, sizeof(destination));

    // Print the results
    printf("Source:      \"%s\"\n", source);
    printf("Destination: \"%s\"\n", destination);
    printf("Length of source: %zu\n", result);

    // Check if truncation occurred
    if (result >= sizeof(destination)) {
        printf("Warning: The source string was truncated.\n");
    } else {
        printf("The source string was copied completely.\n");
    }

    return 0;
}

