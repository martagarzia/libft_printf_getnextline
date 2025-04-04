/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:23:52 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 17:50:10 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
n = 255		base = 10		len = 3		255

n = 255		base = 2		len = 8		11111111

n = 255		base = 16		len = 2		FF

n = 0		base = 10		len = 1		0
_____________________________________________________________________

n = 10		decimale = 10	esadecimale = a		binario = 1010
_______________________________________________________________________

remainder = n % base;
remainder = n - ((n / base) * base)
remainder = 255 - ((255 / 10) * 10)

*/

#include "libft.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while ((s[i] != '\0'))
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

char	*ft_itoa_base_unsigned(unsigned long n, int base)
{
	const char	*base_digits = "0123456789abcdef";
	char		*alloc;
	size_t		len;
	int			remainder;
	char		digit;

	if (base < 2 || base > 16)
		return (NULL);
	len = ft_length_unsigned(n, base);
	alloc = malloc(len + 1);
	if (alloc == NULL)
		return (NULL);
	alloc[len] = '\0';
	while (len > 0)
	{
		len--;
		remainder = n % base;
		digit = base_digits[remainder];
		alloc[len] = digit;
		n = n / base;
	}
	return (alloc);
}

size_t	ft_length_unsigned(unsigned long n, int base)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

int	ft_puthex(unsigned int n, const char format)
{
	char	*str_16;
	int		len;
	int		i;

	str_16 = ft_itoa_base_unsigned(n, 16);
	len = 0;
	i = 0;
	if (format == 'X')
	{
		while (str_16[i] != '\0')
		{
			str_16[i] = ft_toupper(str_16[i]);
			i++;
		}
	}
	len = ft_putstr(str_16);
	free(str_16);
	return (len);
}
