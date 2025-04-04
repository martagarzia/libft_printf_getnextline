/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:20:25 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 21:58:17 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
confronta byte per byte il contenuto di due blocchi di memoria. 

void * è un puntatore generico,
può puntare a qualsiasi tipo di dato (int, char, float, etc.),
ma non si può usare void per fare operazioni,
quindi bisogna assegnarli un tipo di dato,
quindi facciamo un cast di s1 e s2 a unsigned char,
unsigned = perchè così lavoriamo solo con numeri positivi,
char = perchè lavoriamo con blocchi di memoria "byte":
1 unsigned char = 1 byte (8 bit)
1 signed char = 4 byte (32 bit)

restituisce
0 = n byte sono uguali
-1 = trova due byte diversi e quello di s1 è più piccolo
1 = trova due byte diversi e quello di s1 è più grande
*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_ch;
	unsigned char	*s2_ch;

	i = 0;
	s1_ch = (unsigned char *)s1;
	s2_ch = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_ch[i] != s2_ch[i])
		{
			if (s1_ch[i] < s2_ch[i])
				return (-1);
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	string1[] = "sunrise";
	const char	string2[] = "sunburn";
	// printf("%d\n", ft_memcmp(string1, string2, 3)); // same 3 = 0
	printf("%d\n", ft_memcmp(string1, string2, 7)); // r > b = 1
	// printf("%d\n", ft_memcmp(string1, string2, 10)); // end before n = 0

	// const char	string3[] = "sunburn";
	// const char	string4[] = "sunrise";
	// printf("%d\n", ft_memcmp(string3, string4, 7)); // b < r = -1

	return (0);
}
*/