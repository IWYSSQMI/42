/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:09:39 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/27 15:45:49 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (num < n && src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*src;
	char	dest[20];

	src = "hey yo what sub";
	printf("base : %s\n", src);
	ft_strncpy(dest, src, 6);
	printf("ft_cpy : %s\n", dest);
}*/
