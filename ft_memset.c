/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:21:07 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/07 22:24:38 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
imposta n byte di un'area di memoria a un valore specificato c.

Restituisce il puntatore ptr, 
che rappresenta l'inizio dell'area di memoria modificata.
*/

//#include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	buffer[30] = "Dolphins are cool!";
	
	ft_memset(buffer, '%', 5);
	printf("%s\n", buffer);
	return (0);
}
*/