/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:17:36 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/10 15:30:35 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Partendo dall'indirizzo di memoria specificato in str, 
imposta a zero (0x00) 
la quantità di byte consecutivi specificata da n. 

cominciamo da +3 perchè \0 è fine stringa, 
quindi printf smette di stampare

ritorna = void.
*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h> // size_t

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	string[] = "Dolphins are funny!";

	ft_bzero(string, 3);
	printf("%s\n", string + 3);
	return (0);
}
*/