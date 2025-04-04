/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:45:38 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 22:02:26 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
char * = point to series of characters (string)
void * = point to any type but can't access or modify

const = can't be modified
*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_ch;
	const char	*src_ch;

	src_ch = (const char *)src;
	dest_ch = (char *)dest;
	i = 0;
	while (i < n)
	{
		dest_ch[i] = src_ch[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	string_d[] = "starfish";
	char	string_s[] = "goldfish";

	printf("destination before: %s\n", string_d);
	ft_memcpy(string_d, string_s, 4);
	printf("destination after: %s\n", string_d);
	return (0);
}
*/