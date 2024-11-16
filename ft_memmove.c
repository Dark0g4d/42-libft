/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:02:25 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/16 04:30:05 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*destination;
	const unsigned char		*source;
	size_t					i;

	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (n == 0)
		return (dst);
	if (destination < source)
		while (n-- > 0)
			*destination++ = *source++;
	else
		while (n-- > 0)
			destination[n] = source[n];
	return (dst);
}
/*
int	main(void)
{
	void	*n_src = NULL;
	void	*n_dst = NULL;
	char	no_src[] = "Hello, world!";
	char	no_dst[] = "This should be replaced";
	char	o_dst[] = "abcdef";
	char	*result;
	size_t	size = 0;

	result = ft_memmove(n_src, n_dst, size);
	printf("null: %s\n", result);
	//size = 1;
	//result = ft_memmove(n_src, n_dst, size);
	//printf("segfault: %s\n", result);
	size = ft_strlen(no_src) + 1;
	result = ft_memmove(no_dst, no_src, size);
	printf("no overlap: %s\n", result); 
	size = 4;
	result = ft_memmove(o_dst + 2, o_dst, size);
	printf("overlap: %s\n", result);
}
*/
