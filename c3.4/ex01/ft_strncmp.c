/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:42:44 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/30 12:42:49 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
// 	{
// 		if (s1[i] > s2[i])
// 		{
// 			return (1);
// 		}
// 		else if (s1[i] < s2[i])
// 		{
// 			return (-1);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

/*int	main(void)
{
	//printf("%d\n", strncmp("yak", "helloworld", 3));
	printf("%d", ft_strncmp("yak", "helloworld", 3));
}*/