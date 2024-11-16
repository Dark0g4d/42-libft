/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:02:10 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/16 15:21:22 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*str == uc)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "Hello";
	char	*r_memchr;
	char	*r_ftmemchr;
	int		c = 'e';
	size_t	size = 2;
	
	r_memchr = memchr(str, c, size);
	r_ftmemchr = ft_memchr(str, c, size);
	printf("libc: %s\n", r_memchr);
	printf("libft: %s\n", r_ftmemchr);
}
*/
