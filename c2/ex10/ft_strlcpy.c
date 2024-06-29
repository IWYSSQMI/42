/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:33:45 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/29 22:25:13 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	num;
	unsigned int	i;

	num = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		while (num < (size - 1) && src[num] != '\0')
		{
			dest[num] = src[num];
			num++;
		}
	}
	dest[i] = '\0';
	return (i);
}

/*int   main(void)
{
        char    src[] = "asdjfgash";
        char    dest[20];
	unsigned int	n;

        printf("base : %s\n", src);
        n = ft_strlcpy(dest, src, 6);
        printf("ft_strlcpy : %s\n", dest);
	printf("len : %u\n", n);
}*/
