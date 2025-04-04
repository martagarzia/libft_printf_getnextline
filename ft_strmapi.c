/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:47:16 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/08 16:44:02 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strmapi
crea una nuova stringa modificata string,
applicando la funzione f,
a ciascun carattere,
della stringa originale s.

parametri:
- const char *s = stringa
- char (*f)(unsigned int, char)
	(*f) = puntatore a una funzione
	(unsigned int, char) = prende come paramentri 
		unsigned int = l'indice del carattere nella stringa
		char = il carattere corrente della stringa

ritorna:
- se alloca: puntatore al primo carattere della nuova stringa
- se non alloca: NULL.

malloc
void *malloc( size_t size );
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/

char	ft_upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (i % 2 == 0)
			return (c - 32);
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*alloc;

	i = 0;
	alloc = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (alloc == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		alloc[i] = f(i, s[i]);
		i++;
	}
	alloc[i] = '\0';
	return (alloc);
}
/*
int	main(void)
{
	char	*source_string = "I see a Starfish!";
	char	*transformed_string;

	transformed_string = ft_strmapi(source_string, ft_upper);
	printf("%s\n", transformed_string);
	free(transformed_string);
	return (0);
}
*/