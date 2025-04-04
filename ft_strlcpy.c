/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:27:37 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/07 11:11:21 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
copia da una stringa a un buffer,
un numero di caratteri massimo a d_size -1,
perchè aggiunge \0.

ritorna lunghezza stringa source.
*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

size_t	ft_strlcpy(char *d, const char *s, size_t d_size)
{
	size_t	i;
	size_t	s_size;

	i = 0;
	s_size = 0;
	while (s[s_size] != '\0')
		s_size++;
	if (d_size > 0)
	{
		while (s[i] != '\0' && i < (d_size - 1))
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (s_size);
}
/*
int	main(void)
{
	char	d_buffer[10];
	char	s_string[] = "goldfish";

	//printf("destination before: %s\n", d_buffer);
	ft_strlcpy(d_buffer, s_string, 5); // 5 - 1
	printf("destination after: %s\n", d_buffer);
	return (0);
}
*/