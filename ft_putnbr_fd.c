/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:50:21 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/12 00:56:58 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	nb[12];

	i = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
		nb[i++] = '0';
	else if (n != -2147483648)
	{
		while (n > 0)
		{
			nb[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	while (i > 0)
		write(fd, &nb[--i], 1);
}
