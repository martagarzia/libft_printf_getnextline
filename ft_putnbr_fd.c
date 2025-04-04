/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:46:25 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 10:20:31 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
scrive il valore di un intero (in formato stringa) su un descrittore di file.
return:
Non restituisce nulla (void).
*/

#include "libft.h"
#include <unistd.h> // write
#include <limits.h> // INT_MIN, INT_MAX
/*
void	ft_putstr_fd(char *s, int fd)
{
	while ((s != NULL) && (*s != '\0'))
	{
		write(fd, s, 1);
		s++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int	main(void)
{
	int	number;
	int	file_descriptor;

	file_descriptor = 1;

	number = 3;
	// number = -3;
	// number = 123;
	// number = -123;
	// number = INT_MIN;
	ft_putnbr_fd(number, file_descriptor);
	ft_putchar_fd('\n', file_descriptor);
	return (0);
}
*/