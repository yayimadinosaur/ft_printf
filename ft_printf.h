/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:16:32 by wfung             #+#    #+#             */
/*   Updated: 2017/06/21 17:07:06 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

#include <stdio.h> //to compare against ft_printf

int		ft_printf(const char *format, ...);	//double check prototype?

typedef	struct		s_data
{
	int				i;		//signed int
	int				d;		//same as i signed int?
	int				o;		//unsigned int in octal
	int				u;		//unsigned int in decimal
	unsigned int	x;		//small hex i.e. abcdef
	unsigned int	X;		//big hex i.e. ABCDEF
	char			*out;	//str output
	char			c;		//single char
	char			*ptr;	//address of ptr
	int				param_len;	//store strlen of param per section
	char			flag_type;
	s_data			*next;		//ptr to next param;
}					t_data;

//create struct to store values of each part of str with type %

# endif
