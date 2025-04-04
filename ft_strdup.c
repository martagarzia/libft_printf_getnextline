/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:26:13 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 16:51:06 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
implement using malloc()

strdup
- alloca memoria per creare copia di una stringa data
- se funziona: restituisce un puntatore alla nuova stringa
- se non funzione: NULL

malloc
void *malloc( size_t size );
#include <stdlib.h>
- richiede un blocco di memoria size_t size
- cerca spazio nello heap (nella memoria)
- se lo trova = restituisce puntatore a primo byte del blocco allocato
- se non lo trova = restituisce NULL

strlen
- calcola lunghezza stringa escluso '\0'
- se funziona, ritorna numero di caratteri come size_t

sizeof(char) = 1 byte (8 bit)

free(string_duplicate) = evita memory leak
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, size_t
#include <stdint.h> // SIZE_MAX
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
char	*ft_strdup(const char *s_s)
{
	char	*alloc;
	size_t	len;
	size_t	i;

	len = ft_strlen(s_s);
	alloc = malloc((len + 1) * sizeof(char));
	i = 0;
	if (alloc == NULL)
		return (NULL);
	while (i < len)
	{
		alloc[i] = s_s[i];
		i++;
	}
	alloc[i] = '\0';
	return (alloc);
}
/*
int	main(void)
{
	const char	*string_source = "Starfish";
	char	*string_duplicate = ft_strdup(string_source);

	printf("%s\n", string_duplicate);
	free(string_duplicate);
	return (0);
}
*/