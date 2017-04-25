/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:16:09 by wfung             #+#    #+#             */
/*   Updated: 2017/04/24 19:08:58 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		va_start();
		va_arg();
		va_copy();
		*format++;
	}
	va_end();
	return (1);
}
