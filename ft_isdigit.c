/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:14:15 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:46:39 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int main(void)
{
	int	c;

	c = 49;
	printf("isdigit: i% char: %c", ft_isdigit(c), c);
	c = 65;
	printf("isdigit: i% char: %c", ft_isdigit(c), c);
}
*/
