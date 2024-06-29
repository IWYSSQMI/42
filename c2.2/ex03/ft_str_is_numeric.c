/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:12:10 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/27 19:46:39 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= '0') && (str[n] <= '9'))
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

	
        p = "12asdf34";
        n = ft_str_is_numeric(p);
        printf("%d", n);
}*/
