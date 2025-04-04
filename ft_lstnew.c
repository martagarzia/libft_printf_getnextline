/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:34:39 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 23:42:02 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstnew
crea un nuovo nodo per una lista concatenata, 
inizializza il contenuto del nodo con il valore passato.
___________________________________________________________________________

lista concatenata
	|- nodo 1 -> [2 mele]->[next] -> 
	|- nodo 2 -> [1 maglietta]->[next] -> 
	|- nodo 3 -> [3 carote]->[NULL]

nodo1->content = "2 mele";
nodo1->next = nodo2;

nodo2->content = "1 maglietta";
nodo2->next = nodo3;

nodo3->content = "3 carote";
nodo3->next = NULL;
___________________________________________________________________________

content = indirizzo di memoria di value = 0x7ffd3b1f8e4c
*content = il valore contenuto nella variabile a cui content punta =
	content -> value -> 10
&content = indirizzo di memoria del puntatore content = 0x7ffd3b1f8e40
___________________________________________________________________________

node->content = content;
	node->content = membro di s_list;
	content = parametro ft_lstnew;
assegno al contenuto del node, il valore di "content", in questo caso 30.
___________________________________________________________________________

malloc
void *malloc( size_t size );
malloc(sizeof(t_list) = s_list contiene 2 puntatori (4 byte ognuno) = 8 byte.

*/

// #include <stdio.h> // printf
// #include <limits.h> // INT_MIN, INT_MAX
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t

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
/*
int	main(void)
{
	int		number = 30;
	int		*value = number;

	// char	*value = "2 apples";

	t_list *node = ft_lstnew(value);

	printf("%d\n", node->content);
	// printf("%s\n", node->content); 

    free(node);
	return (0);
}
*/