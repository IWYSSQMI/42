/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:57:25 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/30 13:39:04 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n == 0 && ((str[n] >= 'a') && (str[n] <= 'z')))
			str[n] -= 32;
		else if (n == 0 && ((str[n] >= 'A' && str[n] <= 'Z')))
			str[n] = str[n];
		else if ((str[n - 1] != 32) && ((str[n] >= 'A' && str[n] <= 'Z')))
			str[n] += 32;
		else if (((str[n] >= 0 && str[n] <= 47) || (str[n] == 126))
			&& (str[n + 1] >= 'a' && str[n + 1] <= 'z'))
		{
			str[n + 1] -= 32;
			n++;
		}
		else
			str[n] = str[n];
		n++;
	}
	return (str);
}

/*int	main(void)
{
	char	p[] =  "HELLO";
	char	*n;

	n = ft_strcapitalize(p);
	printf("%s", n);
}*/