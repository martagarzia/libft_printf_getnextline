/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:45:49 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/08 19:45:34 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
putchar
scrive un carattere c, 
lo stampa sul file descriptor fd specificato 
	(1 = stampa "a video" sul terminale)
ritorna:
nulla, tipo void.
*/

#include "libft.h"
#include <unistd.h> // write

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('!', 1);
	write(1, "\n", 1);
	return (0);
}
*/