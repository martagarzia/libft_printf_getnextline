/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:28:20 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 21:59:10 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
confronta str1 con str2 fino a massimo n caratteri.

Si interrompe se:
- raggiunge n caratteri
- trova una carattere diverso nelle due stringhe.
- incontra '\0'

ritorna
-1 (negative value) se str1[i] < str2[i]
0 se tutti i caratteri delle due stringhe fino ad n sono uguali, 
	o si incontra '\0' allo stesso punto (hanno stessa lunghezza)
1 (positive value) se str1[i] > str2[i]
*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
		{
			if ((unsigned char)str1[i] < (unsigned char)str2[i])
				return (-1);
			else
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
	// printf("%d\n", ft_strncmp(string1, string2, 3)); // same 3 = 0
	printf("%d\n", ft_strncmp(string1, string2, 7)); // r > b = 1.
	// printf("%d\n", ft_strncmp(string1, string2, 10)); // end before n = 0


	// const char	string1[] = "sunburn";
	// const char	string2[] = "sunrise";
	// printf("%d\n", ft_strncmp(string1, string2, 7)); // b < r = -1.

	return (0);
}
*/