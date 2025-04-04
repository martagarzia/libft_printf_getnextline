/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:18:42 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 23:03:55 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
elimina tutti i nodi da una lista, li dealloca. 
Imposta il puntatore alla lista a NULL.
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t
/*
void	del(void *content)
{
	free(content);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		current_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = current_node;
	}
	*lst = NULL;
}

/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = (void *)21;
	node2->content = (void *)22;
	node3->content = (void *)23;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	printf("%d\n", (int)node1->content);

	ft_lstclear(node1, del);

	printf("%d\n", (int)node1->content);

	return (0);
}
*/