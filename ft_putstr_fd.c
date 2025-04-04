/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:46:32 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 09:41:49 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
putchar
lo stampa una stringa s,
sul file descriptor fd specificato 
	(1 = stampa "a video" sul terminale)
ritorna:
nulla, tipo void.
*/

#include "libft.h"
#include <unistd.h> // write

void	ft_putstr_fd(char *s, int fd)
{
	while ((s != NULL) && (*s != '\0'))
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	char	*string;

	string = "I want a seagull\n";
	ft_putstr_fd(string, 1);
	return (0);
}
*/