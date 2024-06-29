/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:54:33 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/27 20:51:41 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 'a') && (str[n] <= 'z'))
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}

/*int	main(void)
{
	char    p[] = "hsdfASDG";
	char	*n;

        n = ft_strupcase(p);
        printf("%s", n);
}*/
