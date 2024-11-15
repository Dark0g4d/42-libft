/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:02:25 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:53:39 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destination;

	i = -1;
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (n == 0)
		return (dst);
	if (destination > source)
		while (n--)
			destination[n] = source[n];
	else
		while (++i < n)
			destination[i] = source[i];
	return (dst);
}
/*
int main(void)
{
	char source[10] = " World!";
	char destination[10] = "Hello,";

	printf("source: %s destination: %s", source, destination);
	ft_memmove(destination, source, 7);
	destination[6] = '\0';
	printf("source: %s destination: %s", source, destination);
}
*/
