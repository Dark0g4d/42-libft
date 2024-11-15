/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:12:44 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:47:17 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main(void)
{
	int	c;

	c = 47;
	printf("isalnum: i% char: %c", ft_isalnum(c), c);
	c = 49;
	printf("isalnum: i% char: %c", ft_isalnum(c), c);
	c = 65;
	printf("isalnum: i% char: %c", ft_isalnum(c), c);
}
*/
