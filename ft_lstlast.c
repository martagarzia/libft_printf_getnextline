/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:25:46 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 19:23:26 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstlast
Restituisce l'ultimo nodo della lista concatenata.
ritorna:
- se lista è vuota: NULL
- se lista non è vuota: puntatore all'ultimo nodo della lista.
*/

// #include <stdio.h> // printf
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = (void *)21;
	node2->content = (void *)22;
	node3->content = (void *)23;

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	last_node = ft_lstlast(head);
	printf("%d\n", (int)last_node->content);
	
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/