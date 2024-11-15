/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:05:04 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:51:38 by gcerquei         ###   ########.fr       */
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
	char buffer[10];

	printf("before ft_bzero: %s", str);
	ft_bzero(buffer, 10);
	printf("after ft_bzero:  %s", str);
}
*/