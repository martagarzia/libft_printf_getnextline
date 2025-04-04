/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:18:47 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 13:41:05 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns non-zero int if character is letter */

/* #include <stdio.h> */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	character;
	
	character = 'a';
	printf("%d\n", ft_isalpha(character));
	return (0);
}
*/