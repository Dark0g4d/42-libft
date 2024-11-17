/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:08:46 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 17:07:54 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*node_1 = ft_lstnew("banana");
	t_list	*node_2 = ft_lstnew("banana");

	node_1->next = node_2;
	node_2->next = NULL;
	printf("size: %i\n", ft_lstsize(node_1));
	free(node_1);
	free(node_2);
}
*/
