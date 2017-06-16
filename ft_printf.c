/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:16:09 by wfung             #+#    #+#             */
/*   Updated: 2017/06/15 17:39:00 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int		ft_printf(const char *format, ...)
{
	va_list arg;
//	va_list arg2;
	int		d;
	char	c;
	char	*str;

	va_start(arg, format);
//	va_copy(arg2, arg);
	while (*format != '\0')
	{
		va_arg(arg, );		//va_arg type should correspond to %variable
		va_copy();
		*format++;
	}
	va_end(arg);
	return (1);
}
