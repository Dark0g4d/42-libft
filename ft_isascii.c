/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:15:46 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:47:58 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	int	c;

	c = -1;
	printf("isascii: i% char: %c", ft_isascii(c), c);
	c = 0;
	printf("isascii: i% char: %c", ft_isascii(c), c);
	c = 127;
	printf("isascii: i% char: %c", ft_isascii(c), c);
}
*/
