/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:18:35 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/12 00:18:54 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char c = 'J';
	char *str = "e teste";
	printf("Officiel : Je test ma fonction %d %c %s\n", 15, c, str);
	ft_printf("Maison : Je test ma fonction %d %c %s\n", 15, c, str);
}
