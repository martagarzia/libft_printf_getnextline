/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:27:30 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 22:00:41 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
concatena una stringa source a una stringa destination.
Calcola la lunghezza iniziale della stringa in d fino a '\0'.
copia i caratteri di source in destination,
fino a raggiungere lo spazio massimo del buffer (d_size)
*/

//#include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t
/*
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
*/
size_t	ft_strlcat(char *d, const char *s, size_t d_size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen(d);
	s_len = ft_strlen(s);
	if (d_size <= d_len)
		return (d_size + s_len);
	while (s[i] && (d_len + i < d_size - 1))
	{
		d[d_len + i] = s[i];
		i++;
	}
	d[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int main(void)
{
	char d_str[30] = "Starfish"; //specify buffer size to avoid buffer overflow
	char s_str[] = " and Goldfish! Goose";
	size_t total_lenght;

	printf("d_str before: %s\n", d_str);
	// %zu expects size_t argument
	// sizeof: entire allocated memory (characters + '\0')
	printf("d_str size: %zu\n", sizeof(d_str));
	// ft_strlen: characters (no '\0')
	printf("d_str length: %zu\n", ft_strlen(d_str));

	printf("\n");
	printf("s_str before: %s\n", s_str);
	printf("s_str size: %zu\n", sizeof(s_str));
	printf("s_str length: %zu\n", ft_strlen(s_str));


	// d_str is a pointer to the first element of the array
	total_lenght = ft_strlcat(d_str, s_str, 30);
	printf("\n");
	printf("Total lenght needed: %zu\n", total_lenght);

	printf("\n");
	printf("d_str after: %s\n", d_str);
	printf("d_str size: %zu\n", sizeof(d_str));
	printf("d_str length: %zu\n", ft_strlen(d_str));

	printf("\n");
	printf("s_str after: %s\n", s_str);
	printf("s_str size: %zu\n", sizeof(s_str));
	printf("s_str length: %zu\n", ft_strlen(s_str));

	return (0);
}
*/