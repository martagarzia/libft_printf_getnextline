/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:32:23 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 17:49:55 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
converte un carattere alfabetico da minuscolo a maiuscolo,
se è compreso fra 'a' e 'z',
altrimenti invariato.
*/

// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int		c;

	const char *str = "Goldfish and Starfish";
	c = 0;
	while (str[c] != '\0')
	{
		printf("%c", ft_toupper(str[c]));
		c++;
	}
	printf("\n");
	return (0);
}
*/