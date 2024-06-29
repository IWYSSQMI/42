/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:16:34 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/30 13:54:01 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char s)
{
	return (s >= 32 && s != 127);
}

void	printff(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	n;
	unsigned int	i;
	unsigned int	hex1;

	i = 0;
	while (str[i] != '\0')
	{
		n = str[i];
		if (check(n))
			printff(n);
		else
		{
			write(1, "\\", 1);
			hex1 = str[i] / 16;
			if (hex1 < 10)
			{
				printff("0123456789abcdef"[str[i] / 16]);
				printff("0123456789abcdef"[str[i] % 16]);
			}
		}
		i++;
	}
}

/*int	main(void)
{
	char	*s;

	s = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(s);
}*/
