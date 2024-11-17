/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:16:27 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/17 15:56:06 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	void	*content = "Banana";
	t_list	*new = ft_lstnew(content);

	if (new == NULL)
	{
		printf("list doesn't exist or allocation failed");
		return (1);
	}
	printf("content: %s\n", (char *)new->content);
}
*/
