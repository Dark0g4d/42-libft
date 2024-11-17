/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft	ft_putnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:56:47 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 02:45:02 by gcerquei         ###   ########.fr       */
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

static void	ft_putnbr(char *ptr, int n, int len)
{
	int	is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	ptr[len] = '\0';
	if (n == -2147483648)
	{
		ft_strlcpy(ptr, "-2147483648", 12);
		return ;
	}
	if (is_negative)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (len-- > is_negative)
	{
		ptr[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = length(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_putnbr(ptr, n, len);
	return (ptr);
}

int	main(void)
{
	char	*r_itoa;
	char	*r_ftitoa;
	int		n = 10;

	r_itoa = itoa(n);
	r_ftitoa = ft_itoa(n);
	printf("libc: %s\n", r_itoa);
	printf("libft: %s\n", r_ftitoa);
}

