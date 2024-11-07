/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:58:38 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/07 21:05:00 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}
