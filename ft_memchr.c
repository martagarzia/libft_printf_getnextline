/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:20:09 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 21:58:51 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
const void *s
const = 
void = 

cerca la prima occorrenza del arattere specificato in un blocco di memoria, 
entro i primi n byte.

se trova un byte corrispondente a c:
restituisce un puntatore alla posizione di quel byte.

se non trova il carattere entro gli n byte, restituisce NULL.

usiamo unigned char per fare in modo che i byte siano rappresentati da 
numeri compresi fra 0 e 255.
signed char, i byte sono rappresentati da 
numeri compresi fra -128 e 127

se il valore di c eccede il limite si signed o unsigned char, 
viene applicato il modulo finchè non si arriva a un valore compreso nel range,
nel caso di signed char potrebbe anche essere un valore negativo,
mentre con unsigned char il valore sarà sempre positivo, che è preferibile.

quindi unsigned char facilita il confronto dei byte,
perchè confronta sempre numeri positivi.

%p stampa indirizzi di puntatori

s_ch + i perchè noi iniziamo a scansionare l'array byte per byte dall'inizio,
quindi se troviamo 'e' alla 4 iterazione, 
l'indirizzo di memoria di 'e' nell'array
si troverà a partire dalla strings s_ch + i (il numero di iterazioni fatte)

in questo caso i è 3 perchè dopo 3 iterazioni i == c.

*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_ch;

	i = 0;
	s_ch = (unsigned char *)s;
	while (i < n)
	{
		if (s_ch[i] == (unsigned char)c)
			return ((void *)(s_ch + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	string[] = "Firefighter";
	char	*found;

	found = ft_memchr(string, 'e', 12);
	// found = ft_memchr(string, 'e', 3);
	if (found != NULL)
		printf("%s\n", found);
	else
		printf("%p\n", found);
	return (0);
}
*/