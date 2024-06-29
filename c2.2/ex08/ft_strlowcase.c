/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:52:01 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/28 17:24:52 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 'A') && (str[n] <= 'Z'))
		{
			str[n] += 32;
		}
		n++;
	}
	return (str);
}

/*int   main(void)
{
        char    p[] = "hsdfASDG";
        char    *n;

        n = ft_strlowcase(p);
        printf("%s", n);
}*/
