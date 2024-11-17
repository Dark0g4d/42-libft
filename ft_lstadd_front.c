/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:08:40 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 15:56:35 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
static void	nothing(void *content)
{
	(void)content;
}

int	main(void)
{
	int		i = 0;
	char	*content[] = {"Apple", "Banana", "Orange", "Pear", "Pumpkin", NULL};
	t_list	*head = NULL;

	while (content[i])
	{	
		t_list	*new = ft_lstnew(content[i]);
		if (new == NULL)
		{
			printf("allocation failed or list doesnt exist");
			ft_lstclear(&head, nothing);
			return (1);
		}
		ft_lstadd_front(&head, new);
		i++;
	}
	t_list *current = head;
    while (current)
    {
        printf("content: %s\n", (char *)current->content);
        current = current->next;
    }
	ft_lstclear(&head, nothing);
}
*/
