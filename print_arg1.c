/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:42:09 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/11 16:33:00 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int print_s(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int print_p(void *p)
{
	char	*str;
	int				count;

	str = (char *)p;
	count = 2;
	write(1, "0x", 2);
	count += print_s(str);
	return (count);
}

int	print_di(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = print_s("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = n * -1;
			count += 1;
		}
		if (n > 9)
		{
			count += print_di(n / 10);
		}
		count += print_c((n % 10) + '0');
	}
	return (count);
}

int	print_u(unsigned int n)
{
	int count;

	count = 0;
	if (n > 9)
	{
		count += print_u(n / 10);
	}
	count += print_c((n % 10) + '0');
	return (count);
}
