/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:16:25 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:48:42 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main(void)
{
	int	c;

	c = 0;
	printf("isprint: i% char: %c", ft_isprint(c), c);
	c = 32;
	printf("isprint: i% char: %c", ft_isprint(c), c);
	c = 126;
	printf("isprint: i% char: %c", ft_isprint(c), c);
}
*/
