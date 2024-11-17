/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:05:26 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 15:44:43 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
static void	nothing(void *content)
{
	(void)content;
}

int	main(void)
{
	void	*content = "Banana";
	t_list	*new = ft_lstnew(content);

	printf("content: %s", (char *)new->content);
	ft_lstdelone(new, nothing);
}
*/
