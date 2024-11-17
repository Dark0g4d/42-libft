/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:55:19 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 16:35:12 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
static void	f(void *content)
{
	int	i = 0;
	char *c = (char *)content;

	while (c[i])
	{
		if (ft_isalpha(c[i]))
			c[i] = ft_toupper(c[i]);
		i++;
	}
}

int	main(void)
{
	char	str1[] = "banana";
	char	str2[] = "apple";
	t_list	*node_1 = ft_lstnew(str1);
	t_list	*node_2 = ft_lstnew(str2);

	node_1->next = node_2;
	node_2->next = NULL;
	ft_lstiter(node_1, f);
	printf("node_1: %s\n", (char *)node_1->content);
	printf("node_2: %s\n", (char *)node_2->content);
}
*/
