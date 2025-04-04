/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:17:51 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/10 15:32:23 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
implement using malloc()

calloc
alloca dinamicamente memoria, che viene inizializzata a zero.
- moltiplica n * size, per determinare il numero di byte da allocare
- passa questa dimensione a malloc per cercare nell'heap (memoria)
	un blocco di memoria contiguo
- se lo trova = alloca e imposta ogni byte a 0, 
ritorna:
- se lo trova = puntatore al primo byte della memoria allocata
- se non lo trova = NULL

malloc
void *malloc( size_t size );

ft_bzero
Partendo dall'indirizzo di memoria specificato in str, 
imposta a zero (0x00) 
la quantità di byte consecutivi specificata da n. 
ritorna = void.

*/

// #include <stdio.h>
#include "libft.h"
#include <stdint.h> // SIZE_MAX
/*
void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
*/

void	*ft_calloc(size_t num, size_t dim)
{
	void	*str;

	if (dim != 0 && num > SIZE_MAX / dim)
	{
		return (NULL);
	}
	str = malloc(num * dim);
	if (!str)
		return (NULL);
	ft_bzero(str, num * dim);
	return (str);
}
/*
int	main(void)
{
	size_t	n;
	size_t	size;
	int	*array;

	n = 10;
	// n = SIZE_MAX; // (nil)
	size = sizeof(int);
	array = (int *)ft_calloc(n, size);
	if (array == NULL)
	{
		printf("%p\n", array);
		return (1);
	}
	printf("%p\n", array);
	
	free(array);
	return (0);
}
*/