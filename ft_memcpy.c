/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:04:59 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/16 04:32:06 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (n == 0)
		return (dst);
	while (n-- > 0)
		*destination++ = *source++;
	return (dst);
}
/*
int main(void)
{
	char source[10] = "Hello!";
	char destination[10];

	printf("source: %s destination: %s\n", source, destination);
	ft_memcpy(destination, source, 2);
	printf("source: %s destination: %s\n", source, destination);
}
*/
