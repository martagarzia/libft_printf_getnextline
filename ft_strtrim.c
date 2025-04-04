/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:47:28 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 17:49:21 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strtrim
Rimuove tutti i caratteri presenti in s2, 
dalla parte iniziale e finale della stringa s1.
ritorna:
- se alloca = puntatore alla strings risultate
- se non alloca = NULL

strchr
scasiona *str carattere per carattere (compreso '\0')
cerca c
ritrna:
- se lo trova = puntatore all' indirizzo del carattere
- se non lo trova = NULL

strlen
calcola la lunghezza di una stringa 
escluso il carattere di terminazione null \0.

*/

#include "libft.h"

/*
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

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
*/
char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(s2, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(s2, s1[end - 1]))
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
/*
int	main(void)
{
	char const *string1;
	char const *string2;
	char	*trim;

	string1 = "fishbowl";
	string2 = "bowl"; 
	// string2 = "fish";
	// string2 = NULL;
	
	trim = ft_strtrim(string1, string2);
	if (trim != NULL)
		printf("%s\n", trim);
	else
		// printf("null\n");
		printf("%p\n", trim);
	free(trim);
	return (0);
}
*/