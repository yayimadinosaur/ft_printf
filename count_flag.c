/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 12:37:19 by wfung             #+#    #+#             */
/*   Updated: 2017/06/20 18:59:58 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		chk_flags(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (0);
}

int		count_percent(char *str)
{
	int		count;
	int		total;
	
	count = 0;
	while (*str)
	{
		count = 0;
		if (*str == '%')
		{
			count++;
			if (count == 1)
			{
				if (chk_flags(*str) == 1)
				{
					store_result();		//store result in struct?
					total++;
				}
				else
					ft_putstr();		// no flags = print entire str
			}
		}
		str++;
	}
	return (count);
}
