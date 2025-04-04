/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:28:03 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 17:49:10 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
scasiona *str carattere per carattere (compreso '\0')
cerca l'ultima volta in cui appare c
calcola la lunghezza della stringa e poi cerca dalla fine

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

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
	char string[] = "Penguin";
	// char string[] = "Pengui";
	char *search;

	search = ft_strrchr(string, 'n'); 
	// search = ft_strrchr(string, 'z'); 
	if (search != NULL)
		printf("%s\n", search);
	else
		printf("NULL\n");
	return (0);
}
*/