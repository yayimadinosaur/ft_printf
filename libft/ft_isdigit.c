/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:10:58 by wfung             #+#    #+#             */
/*   Updated: 2016/12/18 16:39:19 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c < 47 || c > 57)
		return (0);
	else if ((unsigned char)c >= 48 && (unsigned char)c <= 57)
		return (1);
	else
		return (0);
}
