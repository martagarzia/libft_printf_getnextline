/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:58:35 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 23:15:57 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstiter
applica una funzione f su ogni elemento della lista lst. 

return:
Nnulla, tipo void.
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t
/*
void	print_content(void *content)
{
	printf("%d\n", (int)content + 100);
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f((lst)->content);
		lst = lst->next;
	}
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

	// printf("%d\n", (int)node1->content);

	ft_lstiter(node1, print_content);

	// printf("%d\n", (int)node1->content);

	free(node1);
    free(node2);
    free(node3);

	return (0);
}
*/