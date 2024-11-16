/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:55:33 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/16 15:05:36 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int main(void)
{
	char	*r_calloc;
	char	*r_ftcalloc;

	r_calloc = calloc(0, 0);
	r_ftcalloc = ft_calloc(0, 0);
	printf("%s", r_calloc);
	printf("%s", r_ftcalloc);
}
*/
