/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:34 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/19 14:47:57 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sign *= -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = 10 * result + (nptr[i++] - '0');
	return (result * sign);
}
/*
int	main(void)
{
	int		r_atoi;
	int		r_ftatoi;
	char	*p_atoi = "-120ab";
	char	*p_ftatoi = "-120ab";

	r_atoi = atoi(p_atoi);
	r_ftatoi = ft_atoi(p_ftatoi);
	printf("libc: %i\n", r_atoi);
	printf("libft: %i\n", r_ftatoi);
}
*/
