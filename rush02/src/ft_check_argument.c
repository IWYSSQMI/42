/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaewpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:37:21 by akaewpro          #+#    #+#             */
/*   Updated: 2024/06/09 22:44:40 by akaewpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	check_argument(char *instr)
{
	int	index;

	index = 0;
	while (instr[index])
	{
		if (!(instr[index] >= '0' && instr[index] <= '9'))
			return (0);
		index++;
	}
	return (1);
}

int	handle_argument(int argc, char *argv)
{
	if (argc == 2 || argc == 3)
	{
		if (argc == 2 && check_argument(&argv[1]))
		{
			return (1);
		}
		else if (argc == 3 && check_argument(&argv[1]))
			return (2);
	}
	else
		return (0);
	return (0);
}
