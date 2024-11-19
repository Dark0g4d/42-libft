/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:55:33 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/19 14:58:49 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size == 0)
		return (malloc(0));
	if (nmemb > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int main(void)
{
	char	*r_calloc;
	char	*r_ftcalloc;

	printf("%lu\n", (size_t) - 1);
	r_calloc = calloc(0, 0);
	r_ftcalloc = ft_calloc(10, 10);
	printf("libc: %s\n", r_calloc);
	printf("libft: %s\n", r_ftcalloc);
}
*/
