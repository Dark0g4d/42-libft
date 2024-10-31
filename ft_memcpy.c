/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:04:59 by gcerquei          #+#    #+#             */
/*   Updated: 2024/10/31 11:41:55 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*source;
	unsigned char	*dst;

	i = 0;
	j = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (dst[i] != '\0')
		i++;
	while (j < n && source[j])
		dst[i++] = source[j++];
	dst[i] = '\0';
	return (dest);
}
