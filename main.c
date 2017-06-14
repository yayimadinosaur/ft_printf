/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:50:51 by wfung             #+#    #+#             */
/*   Updated: 2017/06/14 09:16:30 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
int		main(int ac, char **av)
{
	int		i;
	char	*builtin;
	char	*made;

	i = 0;
	if (ac > 1)
	{
		while (i < ac && ft_printf() > 0)
		{
			builtin = ft_strdup(atoi(av[i + 1]));
			made = ft_strdup(atoi(av[i + 1]));
			if (ft_strcmp(builtin, made) != 0)
				printf("av[%i] failed builtin [%s] made [%s]\n", i + 1, builtin, made);
			free(builtin);
			free(made);
			builtin = NULL;
			made = NULL;
			i++;
		}
	}
	return (0);
}
*/

int		sumnum(int num, ...)
{
	int sum = 0;
	va_list argptr;
	int	count = 0;
	va_start(argptr, num);
	while(count < num)
	{
		sum += va_arg(argptr, int);
		printf("count = [%d] sum now = %d\n", count, sum);
		count++;
	}
	va_end(argptr);
	return (sum);
}

int		main(void)
{
	int	total;

	total = sumnum(6, 1, 2, 3, 4, 5);
	printf("total = %d\n", total);
	return (0);
}
