/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:47:01 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/10 15:59:51 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strjoin
	Concatena le stringhe s1 e s2, 
	allocando dinamicamente una nuova stringa con malloc.
	ritorna:
	- se allocato: puntatore alla nuova stringa concatenata
	- se non allocato: NULL

	strlen
	size_t strlen(const char *s);

	malloc
	void *malloc( size_t size );
*/

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h> // malloc, size_t
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL )
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL )
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i++];
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{
	char const	*string1 = "star";
	char const	*string2 = "fish";
	char	*concatenated;

	concatenated = ft_strjoin(string1, string2); // strjoin restitusice ptr
	if (concatenated == NULL)
		printf("NULL");
	else
		printf("%s\n", concatenated);
	free(concatenated);
	return (0);
}
*/