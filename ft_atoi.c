/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:34 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/11 17:20:35 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	sign;
	int	result;

	i = 0;
	j = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	j = i + 1;
	while (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sign *= -1;
	if (i > j)
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = 10 * result + (nptr[i++] - '0');
	return (result * sign);
}
