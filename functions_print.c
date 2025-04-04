/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:06:38 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 17:50:18 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_char(va_list arg)
{
	return (ft_putchar(va_arg(arg, int)));
}

int	ft_print_string(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	return (ft_putstr(str));
}

int	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	char			*address16;
	int				len;

	len = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	address = (unsigned long)ptr;
	address16 = ft_itoa_base_unsigned(address, 16);
	if (address16 == NULL)
		return (0);
	len += ft_putstr("0x") + ft_putstr(address16);
	free(address16);
	return (len);
}

int	ft_print_number(va_list arg, char format_spec)
{
	int		n;
	int		len;
	char	*str;

	len = 0;
	n = 0;
	if (format_spec == 'd' || format_spec == 'i')
	{
		n = va_arg(arg, int);
		if (n < 0)
		{
			len += ft_putchar('-');
			n = -n;
		}
	}
	else if (format_spec == 'u')
	{
		n = va_arg(arg, unsigned int);
	}
	str = ft_itoa_base_unsigned((unsigned int)n, 10);
	len += ft_putstr(str);
	free(str);
	return (len);
}

int	ft_print_hex(unsigned int n, const char format_spec)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		return (ft_puthex(n, format_spec));
}
