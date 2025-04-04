/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:46:38 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/08 09:43:23 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
split
divide stringa s ogni volta che trova c
alloca memoria per le stringhe, terminando ognuna con \0
alloca memoria per l'array che contiene i puntatori 
	al primo carattere di ogni stringa + ultimo puntatore è NULL.

ritorna:
- successo = array di puntatori a sottostringhe,
	l'ultimo elemento dell'array è un puntatote NULL
- fallisce = NULL

**split = perchè è un puntatore a un array di puntatori

malloc
void *malloc(size_t size);

0 = true
1 = false

char = 1 byte (8 bit)
char * = 4 byte
*/

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, free, NULL, size_t

size_t	count_substrings(char const *s, char c)
{
	int		i;
	int		string_start;
	size_t	len;

	i = 0;
	string_start = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			string_start = 0;
		else if (s[i] != c && string_start == 0)
		{
			string_start = 1;
			len++;
		}
		i++;
	}
	return (len);
}

char	*ft_allocate(const char *str, char c, int *pos)
{
	char	*word;
	int		start;
	int		len;
	int		i;

	while (str[*pos] == c && str[*pos] != '\0')
		(*pos)++;
	start = *pos;
	while (str[*pos] != c && str[*pos] != '\0')
		(*pos)++;
	len = *pos - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	ft_free(char **split)
{
	size_t	i;

	i = 0;
	if (split == NULL)
		return ;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *str, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		pos;

	if (str == NULL)
		return (NULL);
	pos = 0;
	j = count_substrings(str, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	i = 0;
	while (i < j)
	{
		strs[i] = ft_allocate(str, c, &pos);
		if (strs[i] == NULL)
		{
			ft_free(strs);
			return (NULL);
		}
		i++;
	}
	return (strs);
}
/*
int	main(void)
{
	char *string_source = "2 apples,1 banana,1 rosetta and 1 ciabatta";
	char cleft = ',';
	char **result;
	int i = 0;

	result = ft_split(string_source, cleft);
	if (result != NULL)
	{
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
		ft_free(result);
	}
	return (0);
}
*/