/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:16:31 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 17:38:22 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstadd_front
Aggiunge un nuovo nodo (new) all'inizio di una lista concatenata.
inserendolo prima del primo nodo della lista esistente,
		e aggiorna il puntatore alla testa della lista (*lst).

ritorna:
- se successo = non restituisce nulla (void).
- se lista è vuota (*lst è NULL) = 
	funzione inserisce nodo new come primo elemento della lista.
*/

// #include <stdio.h> // printf
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
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

	new = malloc(sizeof(t_list));
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = (void *)1;
	node2->content = (void *)2;
	node3->content = (void *)3;
	new->content = (void *)4;

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstadd_front(&head, new);

	t_list *i;
	i = head;
	while (i != NULL)
	{
		printf("%d\n", (int)i->content);
		i = i->next;
	}

	free(new);
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/