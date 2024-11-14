/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:02:25 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/05 22:03:43 by gcerquei         ###   ########.fr       */
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
	if (destination > source)
		while (n--)
			destination[n] = source[n];
	else
		while (++i < n)
			destination[i] = source[i];
	return (dst);
}
