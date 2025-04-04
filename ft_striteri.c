/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:46:47 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/08 18:12:12 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
esegue un'operazione su ciascun carattere di una stringa, 
modificandola direttamente, 
perchè i caratteri sono passati tramite puntatore.

retituisce:
nulla, perchè ha ritorno di tipo void.

& = puntatore, prende indirizzo di memoria. 
	Consente di modificare carattere a cui punta.
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t

void	ft_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		if (i % 2 == 0)
			*c = *c - 32;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	source_string[] = "I see a Starfish!";

	ft_striteri(source_string, ft_upper);
	printf("%s\n", source_string);
	return (0);
}
*/