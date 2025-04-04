/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:21:39 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 23:38:40 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
scasiona *str carattere per carattere (compreso '\0')
cerca c
se lo trova, ritorna puntatore all' indirizzo del carattere
se non trova, puntatore all'indirizzo di '\0' = NULL.

(char)c fa un "cast" di c da int in char = 
dice di cosiderare momentaneamente c come char invece di int.

&str[i] ci fornisce l'indirizzo di memoria del carattere str[i].
(char *) trasforma str da 'const char' a 'char',
	perchè la funzione dve ritornare un char *, che può essere modificato.
	se però str è effettivamente 'const' (definita in memoria di sola lettura) 
		tentare di modificarla ritornerebbe "runtime error".
*/

// #include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*
int main(void)
{
	char string[] = "Penguin";
	char *search;

	search = ft_strchr(string, 'g'); 
	// search = ft_strchr(string, 'z'); 
	if (search != NULL)
		printf("%s\n", search);
	else
		printf("NULL\n");
	return (0);
}
*/