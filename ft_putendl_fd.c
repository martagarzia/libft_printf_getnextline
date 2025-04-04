/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:46:15 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 09:41:53 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
putendl
scrive una stringa su un file descriptor specificato 
	(es. 1 per l'output standard (stdout)). 
ritorna:
niente, perchè void
*/

#include "libft.h"
#include <unistd.h> // write

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
/*
int	main()
{
	char *source_string = "I see a starfish!";

	ft_putendl_fd(source_string, 1);
	return (0);
}
*/