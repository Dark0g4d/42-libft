/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:44:04 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 16:47:03 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
/*
int	main(void)
{
	t_list	*node_1 = ft_lstnew("banana");
	t_list	*node_2 = ft_lstnew("apple");
	t_list	*node_3 = ft_lstnew("orange");

	node_1->next = node_2;
	node_2->next = NULL;
	ft_lstadd_back(&node_1, node_3);
	printf("content: %s\n", (char *)node_2->next->content);
	free(node_1);
	free(node_2);
	free(node_3);
}
*/
