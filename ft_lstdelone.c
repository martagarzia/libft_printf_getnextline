/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:42:38 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/10 15:01:43 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
elimina un nodo della lista, libera la memoria.

ritorna: nulla (void)

void (*del)(void*) = puntatore alla funzione,
	che sarà utilizzara per eliminare il node.
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t

void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
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

	ft_lstdelone(node1, del);

	printf("%d\n", (int)node1->content);

	return (0);
}
*/