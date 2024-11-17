/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:25:04 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 16:05:49 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*node_1 = ft_lstnew("banana");
	t_list	*node_2 = ft_lstnew("apple");
	t_list	*r_ftlstlast;

	node_1->next = node_2;
	r_ftlstlast = ft_lstlast(node_1);
    printf("content: %s\n", (char *)r_ftlstlast->content);
	free(node_1);
	free(node_2);
}
*/
