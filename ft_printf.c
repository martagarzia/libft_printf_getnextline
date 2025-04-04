/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:44:27 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 16:48:57 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
usato per stampare testo formattato su stdout (standard output, 1). 
ritorna:
- se stampa: numero caratteri stampati (escluso \0).
- se errore: un valore negativo.
*/

//#include "ft_printf.h"
#include "libft.h"

int	ft_arg_print(char const format_spec, va_list arg)
{
	if (format_spec == 'c')
		return (ft_print_char(arg));
	else if (format_spec == 's')
		return (ft_print_string(arg));
	else if (format_spec == 'p')
		return (ft_print_pointer(va_arg(arg, void *)));
	else if (format_spec == 'd'
		|| format_spec == 'i'
		|| format_spec == 'u')
		return (ft_print_number(arg, format_spec));
	else if (format_spec == 'x'
		|| format_spec == 'X')
		return (ft_print_hex(va_arg(arg, unsigned int), format_spec));
	else if (format_spec == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	int		i;
	int		format_len;

	format_len = 0;
	i = 0;
	va_start(arg_list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			format_len += ft_arg_print(format[i], arg_list);
		}
		else
		{
			format_len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(arg_list);
	return (format_len);
}
