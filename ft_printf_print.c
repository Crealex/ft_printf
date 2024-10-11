/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:48:25 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/11 16:42:20 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int short_print (char c, va_list args)
{
	int count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = print_di(va_arg(args, int));
	else if (c == 'c')
		count = print_c(va_arg(args, char));
	else if (c == 's')
		count = print_s(va_arg(args, char *));
	else if (c == 'p')
		count = print_p(va_arg(args, void *));
	else if (c == 'u')
		count = print_u(va_arg(args, unsigned int));
	else if (c == 'x')
		count = print_x(va_arg(args, unsigned int));
	else if (c == 'X')
		count = print_X(va_arg(args, unsigned int));
	else if (c == '%')
		count = print_c('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int i;
	int count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += short_print(str[i], args);
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
		va_end(args);
	}
	return (i + count);
}

