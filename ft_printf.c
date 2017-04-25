/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:16:09 by wfung             #+#    #+#             */
/*   Updated: 2017/04/25 07:17:23 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int		ft_printf(const char *format, ...)
{
	va_list args;
	int		d;
	char	c;
	char	*str;

	va_start(args, format);

	while (*format != '\0')
	{
		va_arg(arg, );
		va_copy();
		*format++;
	}
	va_end(args);
	return (1);
}
