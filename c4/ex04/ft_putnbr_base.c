/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 01:17:01 by pretch            #+#    #+#             */
/*   Updated: 2024/06/05 17:13:25 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printff(char c)
{
	write(1, &c, 1);
}

// int	check_base(char *base)
// {
// 	int	i;

// 	i = 0;
// 	while (base[i] != '\0')
// 	{
// 		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
// 			return (0);
// 		if (base[i] <= ' ' || base[i] >= '~')
// 			return (0);
// 		i++;
// 	}
// 	if (i <= 1)
// 	{
// 		return (0);
// 	}
// 	return (1);
// }

// void	ft_putnbr_base(int nbr, char *base)
// {
// 	unsigned int	n;
// 	int				size;

// 	if (check_base(base))
// 	{
// 		size = 0;
// 		while (base[size])
// 			size++;
// 		if (nbr < 0)
// 		{
// 			printff('-');
// 			n = -nbr;
// 		}
// 		else
// 			n = nbr;
// 		if (n >= (unsigned int)size)
// 			ft_putnbr_base(n / size, base);
// 		printff(base[n % size]);
// 	}
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	str[100];
	int		i;
	int		nega;
	int		len;

	if (nbr == 0)
	{
		printff('0');
		return;
	}

	i = 0;
	nega = 1;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		nega = -1;
		printff('-');
	}
	while (nbr != 0)
	{
		str[i] = base[(nbr % len) * nega];
		nbr = nbr / len;
		i++;
	}
	while (--i >= 0)
		printff(str[i]);
}

/*int main() 
{
    ft_putnbr_base(31, "0123456789ABCDEF");
    return 0;
}*/
