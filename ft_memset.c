/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:12:13 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:50:17 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
		str[i++] = (unsigned char)c;
	return (s);
}
/*
int main(void)
{
	char str[13] = "Hello, World!";; 

	printf("before ft_memset: %s", str);
	ft_memset(str + 4, '.', 4 * sizeof(char));
	printf("after ft_memset:  %s", str);
}
*/
