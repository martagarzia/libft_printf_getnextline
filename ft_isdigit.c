/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:19:34 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 13:41:10 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns non-zero int if character is digit */

/* #include <stdio.h> */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	digit;

	digit = '0';
	printf("%d\n", ft_isdigit(digit));
	return (0);
}
*/