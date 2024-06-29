/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:49:19 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/28 17:22:59 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= ' ') && (str[n] <= '~'))
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int     main(void)
{
        char    *p;
        int     n;

        
        p = "       ";
        n = ft_str_is_printable(p);
        printf("%d", n);
}*/
