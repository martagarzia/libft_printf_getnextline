/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:18:22 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 13:41:02 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns non-zero int if the character is alphanumeric*/

/* #include <stdio.h> */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main(void)
{
	char alphanumber;

	alphanumber = 'a';
	//alphanumber = '2';
	//alphanumber = '%';
	printf("%d\n", ft_isalnum(alphanumber));
	return (0);
}
*/
