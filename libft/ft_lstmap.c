/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicco <nicco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:39:11 by npizzi            #+#    #+#             */
/*   Updated: 2024/04/24 22:56:35 by nicco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;

	if (lst == NULL || *f == NULL || *del == NULL)
		return (NULL);
	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	head = new_node;
	while (lst != NULL)
	{
		new_node->content = f(lst->content);
		new_node->next = (t_list *)malloc(sizeof(t_list));
		if (new_node->next == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_node = new_node->next;
		lst = lst->next;
	}
	new_node->next = NULL;
	return (head);
}
