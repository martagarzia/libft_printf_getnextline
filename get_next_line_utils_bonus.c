/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:17:51 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 17:55:07 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strjoin
		cosa fa:	Concatena le stringhe s1 e s2, 
					allocando dinamicamente una nuova stringa con malloc.
		ritorna:	puntatore alla nuova stringa
						se allocazione ha successo
					NULL
						se allocazione fallisce
*/

#include "libft.h"

int	there_is_newline(char *buf_cont)
{
	int	i;

	i = 0;
	if (buf_cont == NULL)
		return (0);
	while (buf_cont[i] != '\0')
	{
		if (buf_cont[i++] == '\n')
			return (1);
	}
	return (0);
}

char	*string_join(char *str1, char *str2)
{
	char	*str3;
	size_t	size1;
	size_t	size2;
	size_t	i;
	size_t	j;

	size1 = ft_strlen_c(str1, '\0');
	size2 = ft_strlen_c(str2, '\0');
	i = 0;
	j = 0;
	str3 = malloc(size1 + size2 + 1);
	if (str3 == NULL)
		return (NULL);
	while (i < size1)
		str3[i++] = str1[j++];
	j = 0;
	while (j < size2)
		str3[i++] = str2[j++];
	str3[i] = '\0';
	free(str1);
	return (str3);
}

size_t	ft_strlen_c(const char *str, char c)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}
