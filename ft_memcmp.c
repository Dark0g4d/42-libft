/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:26:23 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/16 15:26:02 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hello";
	char	*r_memcmp;
	char	*r_ftmemcmp;
	size_t	size = 1;

	r_memcmp = memcmp(s1, s2, size);
	r_ftmemcmp = ft_memcmp(s1, s2, size);
	printf("libc: %s\n", r_memcmp);
	printf("libft: %s\n", r_ftmemcmp);
}
*/
