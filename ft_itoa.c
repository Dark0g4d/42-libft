/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:56:47 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/11 17:18:23 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	len;
	int	temp;

	len = 1;
	temp = n;
	while (temp / 10)
	{
		temp /= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

static void	itoa(char *stritoa, int n, int len)
{
	int	is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	stritoa[len] = '\0';
	if (n == -2147483648)
	{
		ft_strlcpy(stritoa, "-2147483648", 12);
		return ;
	}
	if (is_negative)
	{
		stritoa[0] = '-';
		n = -n;
	}
	while (len-- > is_negative)
	{
		stritoa[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*stritoa;

	len = length(n);
	stritoa = malloc((len + 1) * sizeof(char));
	if (stritoa == NULL)
		return (NULL);
	itoa(stritoa, n, len);
	return (stritoa);
}
