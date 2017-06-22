/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 12:37:19 by wfung             #+#    #+#             */
/*   Updated: 2017/06/21 17:30:02 by wfung            ###   ########.fr       */
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
	t_data	*data;

	if (!(data = (data*)malloc(sizeof(data) * (1))))
		return (-1);
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
					store_result(data);		//store result in struct?
					data->next = NULL;
					total++;
				}
			}
		}
		str++;
	}
	return (count);
}
