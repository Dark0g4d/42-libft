/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:05:04 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 01:30:09 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
		str[i++] = 0;
}
/*
int main(void)
{	
	char	p_bzero[10];
	char	p_ftbzero[10];

	bzero(p_bzero, 10);
	ft_bzero(p_ftbzero, 10);
	printf("libc: %s\n", p_bzero);
	printf("libft: %s\n", p_ftbzero);
}
*/
