/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:29:45 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/10 16:04:35 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstadd_back
aggiunge un nuovo nodo alla fine di una lista collegata.

ritorna:
- Se la lista è vuota: non ritorna nulla.
- Se la lista ha già elementi: Aggiunge new come ultimo nodo della lista.

*/

// #include <stdio.h> // printf
#include "libft.h"
/*
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
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL )
		return ;
	if (*lst != NULL)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));

	node1->content = (void *)21;
	node2->content = (void *)22;
	node3->content = (void *)23;
	new->content = (void *)24;

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstadd_back(&head, new);

	t_list *last_node = ft_lstlast(head);
	printf("%d\n", (int)last_node->content);
	
	free(node1);
	free(node2);
	free(node3);
	free(new);

	return (0);
}
*/