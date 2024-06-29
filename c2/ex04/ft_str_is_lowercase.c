/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:42:34 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/27 19:45:55 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 'a') && (str[n] <= 'z'))
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

        
        p = "ada132sdf";
        n = ft_str_is_lowercase(p);
        printf("%d", n);
}*/
