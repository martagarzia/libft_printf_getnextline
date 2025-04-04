/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:28:11 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/10 15:32:44 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
cerca prima occorenza si stringa sub (substring),
all'interno dei primi n caratteri di stringa src (source string).

restituisce
Se sub è una stringa vuota ("") = un puntatore alla posizione iniziale di src.

Se sub viene trovata in src entro i primi n caratteri = 
	un puntatore alla posizione iniziale di sub in src.

Se sub non viene trovata entro i primi n caratteri = NULL.
*/

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t

char	*ft_strnstr(const char *src, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*sub == '\0')
		return ((char *) src);
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (sub[j] == src[i + j] && i + j < len)
		{
			if (sub[j + 1] == '\0')
			{
				return ((char *)src + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*found;

	char	source_string[] = "firefighters";

	// char	substring[] = "fire";
	// char	substring[] = "cat";
	// found = (ft_strnstr(source_string, substring, 7));

	char	substring[] = "fighter";
	found = (ft_strnstr(source_string, substring, 14));

	if (found != NULL)
		printf("%s\n", found);
	else
		printf("%p\n", found);
	return (0);
}
*/