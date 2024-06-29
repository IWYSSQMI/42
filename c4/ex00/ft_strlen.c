/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <pngoende@student.42.bk>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:20:57 by pretch            #+#    #+#             */
/*   Updated: 2024/06/01 15:21:25 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*int	 main(void)
{
	char str[] = "Isalamalakum";
	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
}*/