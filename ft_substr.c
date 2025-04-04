/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:47:35 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 17:54:59 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Estrae una sottostringa (substring) da una stringa (s).

ritorna:
- se alloca = puntatore a substring
- se non alloca = NULL
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, size_t
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
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	size_t			len_str;

	i = -1;
	if (s == NULL)
		return (NULL);
	len_str = ft_strlen(s);
	if (len > len_str)
		len = len_str;
	if (len == 0 || start >= len_str)
		len = 0;
	else if (start + len > len_str)
		len = len_str - start;
	new = (char *) malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (++i < len && s[i] != '\0')
		new[i] = s[start + i];
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	const char	*string_source = "firefighter";
	char	*string_sub;

	string_sub = ft_substr(string_source, 4, 5);
	if (string_sub != NULL)
	{
		printf("%s\n", string_sub);
		free(string_sub);
	}
	else
		printf("null");
	return (0);
}
*/