/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:45:25 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/08 16:31:17 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
itoa
Converte un numero int in una stringa (char *).
- determina lunghezza della stringa che rappresenterà n
	(numeri e segni positivi e negativi)
- alloca con malloc() memoria per la stringa
- se n è negativo mette il segno come primo carattere
- converte ciascuna cifra di n e la mette nella stringa
	nell'ordine: unità, decine, centinaia, ...
	usa modulo
- aggiunge \0 alla fine della stringa
ritorna:
- se alloca: puntatore alla stringa che rappresenta n
- se non alloca: NULL

static char function_name = 
	per non permettere ad altre funzioni nel programma di potere utilizzarla

malloc
void *malloc( size_t size );
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t
#include <limits.h> // INT_MIN

size_t	ft_lenght(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_string(long n_long, size_t len)
{
	char	*alloc;

	alloc = (char *)malloc((len + 1) * sizeof(char));
	if (alloc == NULL)
		return (NULL);
	alloc[len] = '\0';
	if (n_long < 0)
	{
		alloc[0] = '-';
		n_long *= -1;
	}
	if (n_long == 0)
	{
		len--;
		alloc[len] = '0';
	}
	while (n_long > 0)
	{
		len--;
		alloc[len] = (n_long % 10) + '0';
		n_long /= 10;
	}
	return (alloc);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*string;
	long	n_long;

	n_long = n;
	len = (ft_lenght(n));
	string = ft_string(n_long, len);
	return (string);
}
/*
int	main(void)
{
	char	*string;

	string = ft_itoa(2);
	// string = ft_itoa(0);
	// string = ft_itoa(-42);
	// string = ft_itoa(12345);
	// string = ft_itoa(INT_MIN);

	printf("%s\n", string);
	free(string);
	return (0);
}
*/