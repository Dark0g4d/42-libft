/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:15:05 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/10 02:20:22 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*strtrm;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	strtrm = malloc(len - i + 1);
	if (strtrm == NULL)
		return (NULL);
	while (i < len)
		strtrm[j++] = s1[i++];
	strtrm[j] = '\0';
	return (strtrm);
}
