/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:20:51 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 22:01:56 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copia un blocco di memoria da source a destination, 
se si sovrappongono:
se destination è dopo source, copia backwards
se destination è prima di source, copia forward
byte consecutivi
*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

static void	backwards(char *d,
	const char *s, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
}

static void	forward(char *d,
	const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char		*d_ch;
	const char	*s_ch;

	d_ch = (char *)d;
	s_ch = (const char *)s;
	if (d_ch > s_ch)
		backwards(d_ch, s_ch, n);
	else
		forward(d_ch, s_ch, n);
	return (d);
}
/*
int	main(void)
{
	char	string_d[] = "starfish";
	char	string_s[] = "goldfish";

	printf("destination before: %s\n", string_d);
	ft_memmove(string_d, string_s, 4);
	// ft_memmove(string_d, string_s, 0);
	// ft_memmove(NULL, string_s, 4); //segmentation fault (can't access memory)
	printf("destination after: %s\n", string_d);
	return (0);
}
*/