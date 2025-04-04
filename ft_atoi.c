/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:17:14 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/08 09:43:36 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
atoi = ASCII to integer

converte una stringa di caratteri che rappresenta un numero intero 
in un valore numerico di tipo int.

- ignora gli spazi bianchi iniziali (spazi, tab, ecc.).
- interpreta + e - prima del numero
- coverte '0' - '9' in intero

- si ferma al primo carattere non numerico

ritorna
- int, convertito dai caratteri che rappresentano l'intero
- se non ci sono caratteri numerici = comportamento non definito

9 - 13 = caratteri di controllo \t \n \v \f \r

*s è un puntatore a una stringa, 
che parte sempre dal primo posto nella stringa,
quindi possiamo usarlo per calcolare il movimento nella stringa usando s++,
senza dover usare i.

per result usiamo long e non int 
perchè permettere di utiliazzare numeri più grandi,
evitando overflow.
*/

// #include <stdio.h> // printf
#include "libft.h"

int	ft_atoi(const char *s)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return ((int)(result * sign));
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("12345abc"));
}
*/