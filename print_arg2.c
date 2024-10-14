/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:40:16 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/14 11:51:48 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(unsigned long n)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (n > 15)
	{
		count += print_x(n / 16);
	}
	count += print_c(hex[n % 16]);
	return (count);
}

int	print_xmaj(unsigned int n)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789ABCDEF";
	if (n > 15)
	{
		count += print_xmaj(n / 16);
	}
	count += print_c(hex[n % 16]);
	return (count);
}
