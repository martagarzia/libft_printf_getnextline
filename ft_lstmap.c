/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 00:00:54 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/10 18:00:13 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstmap
applica la funzione f a ogni elemento della lista lst, 
crea una nuova lista,
i cui nodi contengono i risultati di f. 
del libera la memoria dei nodi.
ritorna:
- se alloca = restituisce la nuova lista.
- se non alloca = restituisce NULL.

lstnew
crea un nuovo nodo per una lista concatenata, 
inizializza il contenuto del nodo con il valore passato.

lstclear
elimina tutti i nodi da una lista, li dealloca. 
Imposta il puntatore alla lista a NULL.

lstadd_back
aggiunge un nuovo nodo alla fine di una lista collegata.

*/

#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t
/*
void	*add_100(void *content)
{
	int	*new_content;

	new_content = malloc(sizeof(int));
	*new_content = *(int *)content + 100;
	return (new_content);
}

void	del(void *content)
{
	free(content);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

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

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL )
		return ;
	if (*lst != NULL)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped_list;
	t_list	*new;

	if (f == NULL || lst == NULL)
		return (NULL);
	mapped_list = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		ft_lstadd_back(&mapped_list, new);
		lst = lst->next;
	}
	return (mapped_list);
}
/*
int main(void) {
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *new_list;

	int *val1 = malloc(sizeof(int));
	int *val2 = malloc(sizeof(int));
	int *val3 = malloc(sizeof(int));

	*val1 = 21;
	*val2 = 22;
	*val3 = 23;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = val1;
	node2->content = val2;
	node3->content = val3;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	t_list *current = node1;

	new_list = ft_lstmap(node1, add_100, del);

	current = new_list;
	while (current != NULL) {
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}

	ft_lstclear(&new_list, del);
	ft_lstclear(&node1, del);

	return 0;
} 
*/