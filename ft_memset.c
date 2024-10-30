/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:12:13 by gcerquei          #+#    #+#             */
/*   Updated: 2024/10/30 14:56:58 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < num)
		p[i++] = (unsigned char)value;
	return (ptr);
}
