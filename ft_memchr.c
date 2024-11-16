/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:02:10 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/16 04:50:52 by gcerquei         ###   ########.fr       */
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
	char	*str = "Hello!";
	char	*result;
	int		c = 'e';
	size_t	size = 0;
	
	result = ft_memchr(str, c, size);
	printf("%s", result);
}
*/
