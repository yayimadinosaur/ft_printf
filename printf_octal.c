/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_octal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 17:34:40 by wfung             #+#    #+#             */
/*   Updated: 2017/04/24 17:43:38 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_octal(int n)
{
	int		i;
	int		octal_num;

	i = 1;
	octal_num = 0;
	while (buff != 0)
	{
		octal_num = (n % 8) * i;
		n = n / 8;
		i = i * 10;
	}
	ft_putstr(ft_itoa(n));
	return ;
}
