/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:01:05 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/12 00:05:18 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*));
{
	size_t i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i++])
		str[i] = f(i, str[i]);
}