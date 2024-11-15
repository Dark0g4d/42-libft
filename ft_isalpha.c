/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:35 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/15 18:46:03 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main(void)
{
	int	c;

	c = 65;
	printf("is alpha: i% char: %c", ft_isalpha(c), c);
	c = 49;
	printf("is alpha: i% char: %c", ft_isalpha(c), c);
}
*/
