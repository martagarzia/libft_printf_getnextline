/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:19:50 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 22:04:24 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns non-zero int 
if the character is printable ASCII character 
(digits, uppercase, lowercase, punctuation, space)*/

/* #include <stdio.h */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	character;

	//character = 'a';
	//character = 'A';
	//character = '2';
	//character = '%';
	//character = ' ';
	//
	//character = 10;
	character = '\n';
	printf("%d\n", ft_isprint(character));
	return (0);
}
*/